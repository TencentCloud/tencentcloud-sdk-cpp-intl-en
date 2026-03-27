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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REGISTRYCONNDETECTRESULT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REGISTRYCONNDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Image Repository Connectivity Detection Result
                */
                class RegistryConnDetectResult : public AbstractModel
                {
                public:
                    RegistryConnDetectResult();
                    ~RegistryConnDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host quuid or backend for Connectivity Detection
                     * @return Quuid Host quuid or backend for Connectivity Detection
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host quuid or backend for Connectivity Detection
                     * @param _quuid Host quuid or backend for Connectivity Detection
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Host uuid or backend for Connectivity Detection
                     * @return Uuid Host uuid or backend for Connectivity Detection
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host uuid or backend for Connectivity Detection
                     * @param _uuid Host uuid or backend for Connectivity Detection
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Detection Result Status
                     * @return ConnDetectStatus Detection Result Status
                     * 
                     */
                    std::string GetConnDetectStatus() const;

                    /**
                     * 设置Detection Result Status
                     * @param _connDetectStatus Detection Result Status
                     * 
                     */
                    void SetConnDetectStatus(const std::string& _connDetectStatus);

                    /**
                     * 判断参数 ConnDetectStatus 是否已赋值
                     * @return ConnDetectStatus 是否已赋值
                     * 
                     */
                    bool ConnDetectStatusHasBeenSet() const;

                    /**
                     * 获取Detection Result Information
                     * @return ConnDetectMessage Detection Result Information
                     * 
                     */
                    std::string GetConnDetectMessage() const;

                    /**
                     * 设置Detection Result Information
                     * @param _connDetectMessage Detection Result Information
                     * 
                     */
                    void SetConnDetectMessage(const std::string& _connDetectMessage);

                    /**
                     * 判断参数 ConnDetectMessage 是否已赋值
                     * @return ConnDetectMessage 是否已赋值
                     * 
                     */
                    bool ConnDetectMessageHasBeenSet() const;

                    /**
                     * 获取Failure Resolution
                     * @return Solution Failure Resolution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Failure Resolution
                     * @param _solution Failure Resolution
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取Failure Cause
                     * @return FailReason Failure Cause
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Failure Cause
                     * @param _failReason Failure Cause
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * Host quuid or backend for Connectivity Detection
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host uuid or backend for Connectivity Detection
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Detection Result Status
                     */
                    std::string m_connDetectStatus;
                    bool m_connDetectStatusHasBeenSet;

                    /**
                     * Detection Result Information
                     */
                    std::string m_connDetectMessage;
                    bool m_connDetectMessageHasBeenSet;

                    /**
                     * Failure Resolution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * Failure Cause
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REGISTRYCONNDETECTRESULT_H_
