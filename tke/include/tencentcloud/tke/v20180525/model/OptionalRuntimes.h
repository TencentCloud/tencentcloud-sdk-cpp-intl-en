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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OPTIONALRUNTIMES_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OPTIONALRUNTIMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Optional runtime
                */
                class OptionalRuntimes : public AbstractModel
                {
                public:
                    OptionalRuntimes();
                    ~OptionalRuntimes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Runtime type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return RuntimeType Runtime type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuntimeType() const;

                    /**
                     * 设置Runtime type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _runtimeType Runtime type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuntimeType(const std::string& _runtimeType);

                    /**
                     * 判断参数 RuntimeType 是否已赋值
                     * @return RuntimeType 是否已赋值
                     * 
                     */
                    bool RuntimeTypeHasBeenSet() const;

                    /**
                     * 获取Runtime version list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return RuntimeVersions Runtime version list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRuntimeVersions() const;

                    /**
                     * 设置Runtime version list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _runtimeVersions Runtime version list
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuntimeVersions(const std::vector<std::string>& _runtimeVersions);

                    /**
                     * 判断参数 RuntimeVersions 是否已赋值
                     * @return RuntimeVersions 是否已赋值
                     * 
                     */
                    bool RuntimeVersionsHasBeenSet() const;

                    /**
                     * 获取Default runtime version for this type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DefaultVersion Default runtime version for this type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDefaultVersion() const;

                    /**
                     * 设置Default runtime version for this type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _defaultVersion Default runtime version for this type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDefaultVersion(const std::string& _defaultVersion);

                    /**
                     * 判断参数 DefaultVersion 是否已赋值
                     * @return DefaultVersion 是否已赋值
                     * 
                     */
                    bool DefaultVersionHasBeenSet() const;

                private:

                    /**
                     * Runtime type
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_runtimeType;
                    bool m_runtimeTypeHasBeenSet;

                    /**
                     * Runtime version list
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_runtimeVersions;
                    bool m_runtimeVersionsHasBeenSet;

                    /**
                     * Default runtime version for this type
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_defaultVersion;
                    bool m_defaultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OPTIONALRUNTIMES_H_
