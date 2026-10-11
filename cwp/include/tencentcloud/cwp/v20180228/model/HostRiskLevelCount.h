/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTRISKLEVELCOUNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTRISKLEVELCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Host risk count
                */
                class HostRiskLevelCount : public AbstractModel
                {
                public:
                    HostRiskLevelCount();
                    ~HostRiskLevelCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host ID
                     * @return HostId Host ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置Host ID
                     * @param _hostId Host ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Critical count
                     * @return SeriousCount Critical count
                     * 
                     */
                    int64_t GetSeriousCount() const;

                    /**
                     * 设置Critical count
                     * @param _seriousCount Critical count
                     * 
                     */
                    void SetSeriousCount(const int64_t& _seriousCount);

                    /**
                     * 判断参数 SeriousCount 是否已赋值
                     * @return SeriousCount 是否已赋值
                     * 
                     */
                    bool SeriousCountHasBeenSet() const;

                    /**
                     * 获取High-risk count
                     * @return HighCount High-risk count
                     * 
                     */
                    int64_t GetHighCount() const;

                    /**
                     * 设置High-risk count
                     * @param _highCount High-risk count
                     * 
                     */
                    void SetHighCount(const int64_t& _highCount);

                    /**
                     * 判断参数 HighCount 是否已赋值
                     * @return HighCount 是否已赋值
                     * 
                     */
                    bool HighCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk vulnerabilities
                     * @return MediumCount Number of medium-risk vulnerabilities
                     * 
                     */
                    int64_t GetMediumCount() const;

                    /**
                     * 设置Number of medium-risk vulnerabilities
                     * @param _mediumCount Number of medium-risk vulnerabilities
                     * 
                     */
                    void SetMediumCount(const int64_t& _mediumCount);

                    /**
                     * 判断参数 MediumCount 是否已赋值
                     * @return MediumCount 是否已赋值
                     * 
                     */
                    bool MediumCountHasBeenSet() const;

                    /**
                     * 获取Number of low-risk vulnerabilities
                     * @return LowCount Number of low-risk vulnerabilities
                     * 
                     */
                    int64_t GetLowCount() const;

                    /**
                     * 设置Number of low-risk vulnerabilities
                     * @param _lowCount Number of low-risk vulnerabilities
                     * 
                     */
                    void SetLowCount(const int64_t& _lowCount);

                    /**
                     * 判断参数 LowCount 是否已赋值
                     * @return LowCount 是否已赋值
                     * 
                     */
                    bool LowCountHasBeenSet() const;

                private:

                    /**
                     * Host ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Critical count
                     */
                    int64_t m_seriousCount;
                    bool m_seriousCountHasBeenSet;

                    /**
                     * High-risk count
                     */
                    int64_t m_highCount;
                    bool m_highCountHasBeenSet;

                    /**
                     * Number of medium-risk vulnerabilities
                     */
                    int64_t m_mediumCount;
                    bool m_mediumCountHasBeenSet;

                    /**
                     * Number of low-risk vulnerabilities
                     */
                    int64_t m_lowCount;
                    bool m_lowCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTRISKLEVELCOUNT_H_
