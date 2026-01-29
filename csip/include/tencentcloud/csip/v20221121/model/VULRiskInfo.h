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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulImpactComponentInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability risk information.
                */
                class VULRiskInfo : public AbstractModel
                {
                public:
                    VULRiskInfo();
                    ~VULRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fixing suggestion
                     * @return Fix Fixing suggestion
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fix Fixing suggestion
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Technology reference/reference link.
                     * @return References Technology reference/reference link.
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置Technology reference/reference link.
                     * @param _references Technology reference/reference link.
                     * 
                     */
                    void SetReferences(const std::string& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取Vulnerability description
                     * @return Describe Vulnerability description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Vulnerability description
                     * @param _describe Vulnerability description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Affected component.
                     * @return ImpactComponent Affected component.
                     * 
                     */
                    std::vector<VulImpactComponentInfo> GetImpactComponent() const;

                    /**
                     * 设置Affected component.
                     * @param _impactComponent Affected component.
                     * 
                     */
                    void SetImpactComponent(const std::vector<VulImpactComponentInfo>& _impactComponent);

                    /**
                     * 判断参数 ImpactComponent 是否已赋值
                     * @return ImpactComponent 是否已赋值
                     * 
                     */
                    bool ImpactComponentHasBeenSet() const;

                private:

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Technology reference/reference link.
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * Vulnerability description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Affected component.
                     */
                    std::vector<VulImpactComponentInfo> m_impactComponent;
                    bool m_impactComponentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKINFO_H_
