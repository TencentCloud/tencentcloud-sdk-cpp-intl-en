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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARDENABLE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARDENABLE_H_

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
                * Whether to enable the compliance standard
                */
                class ComplianceBenchmarkStandardEnable : public AbstractModel
                {
                public:
                    ComplianceBenchmarkStandardEnable();
                    ~ComplianceBenchmarkStandardEnable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compliance standard ID
                     * @return StandardId Compliance standard ID
                     * 
                     */
                    uint64_t GetStandardId() const;

                    /**
                     * 设置Compliance standard ID
                     * @param _standardId Compliance standard ID
                     * 
                     */
                    void SetStandardId(const uint64_t& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     * 
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the compliance standard
                     * @return Enable Whether to enable the compliance standard
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Whether to enable the compliance standard
                     * @param _enable Whether to enable the compliance standard
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Compliance standard ID
                     */
                    uint64_t m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * Whether to enable the compliance standard
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEBENCHMARKSTANDARDENABLE_H_
