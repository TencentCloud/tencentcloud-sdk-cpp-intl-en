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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOININFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOININFO_H_

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
                * Security log access details
                */
                class SecLogJoinInfo : public AbstractModel
                {
                public:
                    SecLogJoinInfo();
                    ~SecLogJoinInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of connected general nodes
                     * @return Count Number of connected general nodes
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of connected general nodes
                     * @param _count Number of connected general nodes
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Number of connected super nodes
                     * @return SuperNodeCount Number of connected super nodes
                     * 
                     */
                    uint64_t GetSuperNodeCount() const;

                    /**
                     * 设置Number of connected super nodes
                     * @param _superNodeCount Number of connected super nodes
                     * 
                     */
                    void SetSuperNodeCount(const uint64_t& _superNodeCount);

                    /**
                     * 判断参数 SuperNodeCount 是否已赋值
                     * @return SuperNodeCount 是否已赋值
                     * 
                     */
                    bool SuperNodeCountHasBeenSet() const;

                    /**
                     * 获取Whether it is accessed. Valid values: `true` (accessed); `false` (not accessed).
                     * @return IsJoined Whether it is accessed. Valid values: `true` (accessed); `false` (not accessed).
                     * 
                     */
                    bool GetIsJoined() const;

                    /**
                     * 设置Whether it is accessed. Valid values: `true` (accessed); `false` (not accessed).
                     * @param _isJoined Whether it is accessed. Valid values: `true` (accessed); `false` (not accessed).
                     * 
                     */
                    void SetIsJoined(const bool& _isJoined);

                    /**
                     * 判断参数 IsJoined 是否已赋值
                     * @return IsJoined 是否已赋值
                     * 
                     */
                    bool IsJoinedHasBeenSet() const;

                    /**
                     * 获取Log type (
Container bash: "container_bash"
Container startup: "container_launch"
K8s API: "k8s_api"
)
                     * @return LogType Log type (
Container bash: "container_bash"
Container startup: "container_launch"
K8s API: "k8s_api"
)
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type (
Container bash: "container_bash"
Container startup: "container_launch"
K8s API: "k8s_api"
)
                     * @param _logType Log type (
Container bash: "container_bash"
Container startup: "container_launch"
K8s API: "k8s_api"
)
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * Number of connected general nodes
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Number of connected super nodes
                     */
                    uint64_t m_superNodeCount;
                    bool m_superNodeCountHasBeenSet;

                    /**
                     * Whether it is accessed. Valid values: `true` (accessed); `false` (not accessed).
                     */
                    bool m_isJoined;
                    bool m_isJoinedHasBeenSet;

                    /**
                     * Log type (
Container bash: "container_bash"
Container startup: "container_launch"
K8s API: "k8s_api"
)
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOININFO_H_
