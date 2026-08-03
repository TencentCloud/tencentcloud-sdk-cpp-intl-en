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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CreateRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddAclRule request structure.
                */
                class AddAclRuleRequest : public AbstractModel
                {
                public:
                    AddAclRuleRequest();
                    ~AddAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of Internet boundary rules to be added cannot be empty. Each rule must meet the requirements for direction, source and target, action, scope, protocol port, and template restrictions. The entire request must also comply with rule quota and effective rule count limitations. Account-related values must come from read-only queries: for address templates, call DescribeAddressTemplateList, filter the request with TemplateType=1 or 5, and confirm that the returned Data[].Type is 1 or 5. Write Data[].Uuid (with the mb_ prefix) to the corresponding Content, and do not use Data[].TemplateId (with the ip-/dm- prefix). For protocol port templates, filter the request with TemplateType=6, and write Data[].TemplateId (with the pp- prefix) to ParamTemplateId. For asset instances, call DescribeCfwAssets, parse the returned results, and use assets[].instance_id. For asset groups, call DescribeResourceGroupNew, pass QueryType=resource, GroupId="0", ShowType=all, parse the returned results, and use GroupId. For resource tags, pass QueryType=tag, skip the "all assets" root node, and construct JSON using the first-level node GroupName as the Key and the selected second-level sub-node GroupName as the Value, without writing GroupId. For regions, call DescribeAclRegInfo: for Scope=serial, pass FwType=["SERIAL"]; for Scope=side, pass FwType=["BYPASS"]; for Scope=all, pass both items simultaneously, and use Data[].RegionCode. Do not use display names or manually concatenate values. The range for overwrite import is determined solely by the Direction of the first rule.
                     * @return Rules The list of Internet boundary rules to be added cannot be empty. Each rule must meet the requirements for direction, source and target, action, scope, protocol port, and template restrictions. The entire request must also comply with rule quota and effective rule count limitations. Account-related values must come from read-only queries: for address templates, call DescribeAddressTemplateList, filter the request with TemplateType=1 or 5, and confirm that the returned Data[].Type is 1 or 5. Write Data[].Uuid (with the mb_ prefix) to the corresponding Content, and do not use Data[].TemplateId (with the ip-/dm- prefix). For protocol port templates, filter the request with TemplateType=6, and write Data[].TemplateId (with the pp- prefix) to ParamTemplateId. For asset instances, call DescribeCfwAssets, parse the returned results, and use assets[].instance_id. For asset groups, call DescribeResourceGroupNew, pass QueryType=resource, GroupId="0", ShowType=all, parse the returned results, and use GroupId. For resource tags, pass QueryType=tag, skip the "all assets" root node, and construct JSON using the first-level node GroupName as the Key and the selected second-level sub-node GroupName as the Value, without writing GroupId. For regions, call DescribeAclRegInfo: for Scope=serial, pass FwType=["SERIAL"]; for Scope=side, pass FwType=["BYPASS"]; for Scope=all, pass both items simultaneously, and use Data[].RegionCode. Do not use display names or manually concatenate values. The range for overwrite import is determined solely by the Direction of the first rule.
                     * 
                     */
                    std::vector<CreateRuleItem> GetRules() const;

                    /**
                     * 设置The list of Internet boundary rules to be added cannot be empty. Each rule must meet the requirements for direction, source and target, action, scope, protocol port, and template restrictions. The entire request must also comply with rule quota and effective rule count limitations. Account-related values must come from read-only queries: for address templates, call DescribeAddressTemplateList, filter the request with TemplateType=1 or 5, and confirm that the returned Data[].Type is 1 or 5. Write Data[].Uuid (with the mb_ prefix) to the corresponding Content, and do not use Data[].TemplateId (with the ip-/dm- prefix). For protocol port templates, filter the request with TemplateType=6, and write Data[].TemplateId (with the pp- prefix) to ParamTemplateId. For asset instances, call DescribeCfwAssets, parse the returned results, and use assets[].instance_id. For asset groups, call DescribeResourceGroupNew, pass QueryType=resource, GroupId="0", ShowType=all, parse the returned results, and use GroupId. For resource tags, pass QueryType=tag, skip the "all assets" root node, and construct JSON using the first-level node GroupName as the Key and the selected second-level sub-node GroupName as the Value, without writing GroupId. For regions, call DescribeAclRegInfo: for Scope=serial, pass FwType=["SERIAL"]; for Scope=side, pass FwType=["BYPASS"]; for Scope=all, pass both items simultaneously, and use Data[].RegionCode. Do not use display names or manually concatenate values. The range for overwrite import is determined solely by the Direction of the first rule.
                     * @param _rules The list of Internet boundary rules to be added cannot be empty. Each rule must meet the requirements for direction, source and target, action, scope, protocol port, and template restrictions. The entire request must also comply with rule quota and effective rule count limitations. Account-related values must come from read-only queries: for address templates, call DescribeAddressTemplateList, filter the request with TemplateType=1 or 5, and confirm that the returned Data[].Type is 1 or 5. Write Data[].Uuid (with the mb_ prefix) to the corresponding Content, and do not use Data[].TemplateId (with the ip-/dm- prefix). For protocol port templates, filter the request with TemplateType=6, and write Data[].TemplateId (with the pp- prefix) to ParamTemplateId. For asset instances, call DescribeCfwAssets, parse the returned results, and use assets[].instance_id. For asset groups, call DescribeResourceGroupNew, pass QueryType=resource, GroupId="0", ShowType=all, parse the returned results, and use GroupId. For resource tags, pass QueryType=tag, skip the "all assets" root node, and construct JSON using the first-level node GroupName as the Key and the selected second-level sub-node GroupName as the Value, without writing GroupId. For regions, call DescribeAclRegInfo: for Scope=serial, pass FwType=["SERIAL"]; for Scope=side, pass FwType=["BYPASS"]; for Scope=all, pass both items simultaneously, and use Data[].RegionCode. Do not use display names or manually concatenate values. The range for overwrite import is determined solely by the Direction of the first rule.
                     * 
                     */
                    void SetRules(const std::vector<CreateRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取<p>AI operation source</p><p>Enumeration value:</p><ul><li>console: console source value</li><li>wechat: WeChat</li></ul>
                     * @return CfwAiAgentOperationSource <p>AI operation source</p><p>Enumeration value:</p><ul><li>console: console source value</li><li>wechat: WeChat</li></ul>
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI operation source</p><p>Enumeration value:</p><ul><li>console: console source value</li><li>wechat: WeChat</li></ul>
                     * @param _cfwAiAgentOperationSource <p>AI operation source</p><p>Enumeration value:</p><ul><li>console: console source value</li><li>wechat: WeChat</li></ul>
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取Add method. Omit or an empty string means ordinary addition; insert_rule means adding new at a specified position; batch_import means non-overwrite batch import; batch_import_cover means overwrite import, which deletes the existing operation rule corresponding to the first rule's Direction and then adds Rules. Deleted rules will not be restored if addition fails, with extremely high risk. The coverage area is only determined by the first rule. The caller must ensure the Directions of the Rules match. Only the above values are supported.
                     * @return From Add method. Omit or an empty string means ordinary addition; insert_rule means adding new at a specified position; batch_import means non-overwrite batch import; batch_import_cover means overwrite import, which deletes the existing operation rule corresponding to the first rule's Direction and then adds Rules. Deleted rules will not be restored if addition fails, with extremely high risk. The coverage area is only determined by the first rule. The caller must ensure the Directions of the Rules match. Only the above values are supported.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Add method. Omit or an empty string means ordinary addition; insert_rule means adding new at a specified position; batch_import means non-overwrite batch import; batch_import_cover means overwrite import, which deletes the existing operation rule corresponding to the first rule's Direction and then adds Rules. Deleted rules will not be restored if addition fails, with extremely high risk. The coverage area is only determined by the first rule. The caller must ensure the Directions of the Rules match. Only the above values are supported.
                     * @param _from Add method. Omit or an empty string means ordinary addition; insert_rule means adding new at a specified position; batch_import means non-overwrite batch import; batch_import_cover means overwrite import, which deletes the existing operation rule corresponding to the first rule's Direction and then adds Rules. Deleted rules will not be restored if addition fails, with extremely high risk. The coverage area is only determined by the first rule. The caller must ensure the Directions of the Rules match. Only the above values are supported.
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * The list of Internet boundary rules to be added cannot be empty. Each rule must meet the requirements for direction, source and target, action, scope, protocol port, and template restrictions. The entire request must also comply with rule quota and effective rule count limitations. Account-related values must come from read-only queries: for address templates, call DescribeAddressTemplateList, filter the request with TemplateType=1 or 5, and confirm that the returned Data[].Type is 1 or 5. Write Data[].Uuid (with the mb_ prefix) to the corresponding Content, and do not use Data[].TemplateId (with the ip-/dm- prefix). For protocol port templates, filter the request with TemplateType=6, and write Data[].TemplateId (with the pp- prefix) to ParamTemplateId. For asset instances, call DescribeCfwAssets, parse the returned results, and use assets[].instance_id. For asset groups, call DescribeResourceGroupNew, pass QueryType=resource, GroupId="0", ShowType=all, parse the returned results, and use GroupId. For resource tags, pass QueryType=tag, skip the "all assets" root node, and construct JSON using the first-level node GroupName as the Key and the selected second-level sub-node GroupName as the Value, without writing GroupId. For regions, call DescribeAclRegInfo: for Scope=serial, pass FwType=["SERIAL"]; for Scope=side, pass FwType=["BYPASS"]; for Scope=all, pass both items simultaneously, and use Data[].RegionCode. Do not use display names or manually concatenate values. The range for overwrite import is determined solely by the Direction of the first rule.
                     */
                    std::vector<CreateRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * <p>AI operation source</p><p>Enumeration value:</p><ul><li>console: console source value</li><li>wechat: WeChat</li></ul>
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * Add method. Omit or an empty string means ordinary addition; insert_rule means adding new at a specified position; batch_import means non-overwrite batch import; batch_import_cover means overwrite import, which deletes the existing operation rule corresponding to the first rule's Direction and then adds Rules. Deleted rules will not be restored if addition fails, with extremely high risk. The coverage area is only determined by the first rule. The caller must ensure the Directions of the Rules match. Only the above values are supported.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_
