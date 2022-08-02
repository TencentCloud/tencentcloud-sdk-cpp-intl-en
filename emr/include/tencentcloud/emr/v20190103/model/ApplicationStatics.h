/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_APPLICATIONSTATICS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_APPLICATIONSTATICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Yarn application statistics
                */
                class ApplicationStatics : public AbstractModel
                {
                public:
                    ApplicationStatics();
                    ~ApplicationStatics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queue name
                     * @return Queue Queue name
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置Queue name
                     * @param Queue Queue name
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return User Username
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username
                     * @param User Username
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Application type
                     * @return ApplicationType Application type
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Application type
                     * @param ApplicationType Application type
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取`SumMemorySeconds` meaning
                     * @return SumMemorySeconds `SumMemorySeconds` meaning
                     */
                    int64_t GetSumMemorySeconds() const;

                    /**
                     * 设置`SumMemorySeconds` meaning
                     * @param SumMemorySeconds `SumMemorySeconds` meaning
                     */
                    void SetSumMemorySeconds(const int64_t& _sumMemorySeconds);

                    /**
                     * 判断参数 SumMemorySeconds 是否已赋值
                     * @return SumMemorySeconds 是否已赋值
                     */
                    bool SumMemorySecondsHasBeenSet() const;

                    /**
                     * 获取
                     * @return SumVCoreSeconds 
                     */
                    int64_t GetSumVCoreSeconds() const;

                    /**
                     * 设置
                     * @param SumVCoreSeconds 
                     */
                    void SetSumVCoreSeconds(const int64_t& _sumVCoreSeconds);

                    /**
                     * 判断参数 SumVCoreSeconds 是否已赋值
                     * @return SumVCoreSeconds 是否已赋值
                     */
                    bool SumVCoreSecondsHasBeenSet() const;

                    /**
                     * 获取SumHDFSBytesWritten (with unit)
                     * @return SumHDFSBytesWritten SumHDFSBytesWritten (with unit)
                     */
                    std::string GetSumHDFSBytesWritten() const;

                    /**
                     * 设置SumHDFSBytesWritten (with unit)
                     * @param SumHDFSBytesWritten SumHDFSBytesWritten (with unit)
                     */
                    void SetSumHDFSBytesWritten(const std::string& _sumHDFSBytesWritten);

                    /**
                     * 判断参数 SumHDFSBytesWritten 是否已赋值
                     * @return SumHDFSBytesWritten 是否已赋值
                     */
                    bool SumHDFSBytesWrittenHasBeenSet() const;

                    /**
                     * 获取SumHDFSBytesRead (with unit)
                     * @return SumHDFSBytesRead SumHDFSBytesRead (with unit)
                     */
                    std::string GetSumHDFSBytesRead() const;

                    /**
                     * 设置SumHDFSBytesRead (with unit)
                     * @param SumHDFSBytesRead SumHDFSBytesRead (with unit)
                     */
                    void SetSumHDFSBytesRead(const std::string& _sumHDFSBytesRead);

                    /**
                     * 判断参数 SumHDFSBytesRead 是否已赋值
                     * @return SumHDFSBytesRead 是否已赋值
                     */
                    bool SumHDFSBytesReadHasBeenSet() const;

                    /**
                     * 获取Application count
                     * @return CountApps Application count
                     */
                    int64_t GetCountApps() const;

                    /**
                     * 设置Application count
                     * @param CountApps Application count
                     */
                    void SetCountApps(const int64_t& _countApps);

                    /**
                     * 判断参数 CountApps 是否已赋值
                     * @return CountApps 是否已赋值
                     */
                    bool CountAppsHasBeenSet() const;

                private:

                    /**
                     * Queue name
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Application type
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * `SumMemorySeconds` meaning
                     */
                    int64_t m_sumMemorySeconds;
                    bool m_sumMemorySecondsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_sumVCoreSeconds;
                    bool m_sumVCoreSecondsHasBeenSet;

                    /**
                     * SumHDFSBytesWritten (with unit)
                     */
                    std::string m_sumHDFSBytesWritten;
                    bool m_sumHDFSBytesWrittenHasBeenSet;

                    /**
                     * SumHDFSBytesRead (with unit)
                     */
                    std::string m_sumHDFSBytesRead;
                    bool m_sumHDFSBytesReadHasBeenSet;

                    /**
                     * Application count
                     */
                    int64_t m_countApps;
                    bool m_countAppsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_APPLICATIONSTATICS_H_
