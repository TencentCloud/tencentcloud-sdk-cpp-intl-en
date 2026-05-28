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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEFILTER_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Cost analysis filter input
                */
                class CostAnalyzeFilter : public AbstractModel
                {
                public:
                    CostAnalyzeFilter();
                    ~CostAnalyzeFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Contains product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessIn <p>Contains product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBusinessIn() const;

                    /**
                     * 设置<p>Contains product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessIn <p>Contains product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusinessIn(const std::vector<std::string>& _businessIn);

                    /**
                     * 判断参数 BusinessIn 是否已赋值
                     * @return BusinessIn 是否已赋值
                     * 
                     */
                    bool BusinessInHasBeenSet() const;

                    /**
                     * 获取<p>Contains sub-product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductIn <p>Contains sub-product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetProductIn() const;

                    /**
                     * 设置<p>Contains sub-product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productIn <p>Contains sub-product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductIn(const std::vector<std::string>& _productIn);

                    /**
                     * 判断参数 ProductIn 是否已赋值
                     * @return ProductIn 是否已赋值
                     * 
                     */
                    bool ProductInHasBeenSet() const;

                    /**
                     * 获取<p>Contains region id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionIn <p>Contains region id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRegionIn() const;

                    /**
                     * 设置<p>Contains region id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionIn <p>Contains region id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionIn(const std::vector<std::string>& _regionIn);

                    /**
                     * 判断参数 RegionIn 是否已赋值
                     * @return RegionIn 是否已赋值
                     * 
                     */
                    bool RegionInHasBeenSet() const;

                    /**
                     * 获取<p>Contains transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionTypeIn <p>Contains transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetActionTypeIn() const;

                    /**
                     * 设置<p>Contains transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionTypeIn <p>Contains transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionTypeIn(const std::vector<std::string>& _actionTypeIn);

                    /**
                     * 判断参数 ActionTypeIn 是否已赋值
                     * @return ActionTypeIn 是否已赋值
                     * 
                     */
                    bool ActionTypeInHasBeenSet() const;

                    /**
                     * 获取<p>Includes payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayModeIn <p>Includes payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPayModeIn() const;

                    /**
                     * 设置<p>Includes payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payModeIn <p>Includes payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayModeIn(const std::vector<std::string>& _payModeIn);

                    /**
                     * 判断参数 PayModeIn 是否已赋值
                     * @return PayModeIn 是否已赋值
                     * 
                     */
                    bool PayModeInHasBeenSet() const;

                    /**
                     * 获取<p>Include project name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectIn <p>Include project name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetProjectIn() const;

                    /**
                     * 设置<p>Include project name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectIn <p>Include project name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectIn(const std::vector<std::string>& _projectIn);

                    /**
                     * 判断参数 ProjectIn 是否已赋值
                     * @return ProjectIn 是否已赋值
                     * 
                     */
                    bool ProjectInHasBeenSet() const;

                    /**
                     * 获取<p>Contains payer uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayerUinIn <p>Contains payer uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPayerUinIn() const;

                    /**
                     * 设置<p>Contains payer uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payerUinIn <p>Contains payer uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayerUinIn(const std::vector<std::string>& _payerUinIn);

                    /**
                     * 判断参数 PayerUinIn 是否已赋值
                     * @return PayerUinIn 是否已赋值
                     * 
                     */
                    bool PayerUinInHasBeenSet() const;

                    /**
                     * 获取<p>Tag key.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagKey <p>Tag key.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>Tag key.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagKey <p>Tag key.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>Tag value list</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagIn <p>Tag value list</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTagIn() const;

                    /**
                     * 设置<p>Tag value list</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagIn <p>Tag value list</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagIn(const std::vector<std::string>& _tagIn);

                    /**
                     * 判断参数 TagIn 是否已赋值
                     * @return TagIn 是否已赋值
                     * 
                     */
                    bool TagInHasBeenSet() const;

                    /**
                     * 获取<p>Contains availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneIn <p>Contains availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetZoneIn() const;

                    /**
                     * 设置<p>Contains availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneIn <p>Contains availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneIn(const std::vector<std::string>& _zoneIn);

                    /**
                     * 判断参数 ZoneIn 是否已赋值
                     * @return ZoneIn 是否已赋值
                     * 
                     */
                    bool ZoneInHasBeenSet() const;

                    /**
                     * 获取<p>Owner uin</p>
                     * @return OwnerUinIn <p>Owner uin</p>
                     * 
                     */
                    std::vector<std::string> GetOwnerUinIn() const;

                    /**
                     * 设置<p>Owner uin</p>
                     * @param _ownerUinIn <p>Owner uin</p>
                     * 
                     */
                    void SetOwnerUinIn(const std::vector<std::string>& _ownerUinIn);

                    /**
                     * 判断参数 OwnerUinIn 是否已赋值
                     * @return OwnerUinIn 是否已赋值
                     * 
                     */
                    bool OwnerUinInHasBeenSet() const;

                    /**
                     * 获取<p>Component type info</p>
                     * @return ComponentIn <p>Component type info</p>
                     * 
                     */
                    std::vector<std::string> GetComponentIn() const;

                    /**
                     * 设置<p>Component type info</p>
                     * @param _componentIn <p>Component type info</p>
                     * 
                     */
                    void SetComponentIn(const std::vector<std::string>& _componentIn);

                    /**
                     * 判断参数 ComponentIn 是否已赋值
                     * @return ComponentIn 是否已赋值
                     * 
                     */
                    bool ComponentInHasBeenSet() const;

                    /**
                     * 获取<p>Component name</p>
                     * @return ItemIn <p>Component name</p>
                     * 
                     */
                    std::vector<std::string> GetItemIn() const;

                    /**
                     * 设置<p>Component name</p>
                     * @param _itemIn <p>Component name</p>
                     * 
                     */
                    void SetItemIn(const std::vector<std::string>& _itemIn);

                    /**
                     * 判断参数 ItemIn 是否已赋值
                     * @return ItemIn 是否已赋值
                     * 
                     */
                    bool ItemInHasBeenSet() const;

                    /**
                     * 获取<p>Resource id information</p>
                     * @return ResourceIn <p>Resource id information</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIn() const;

                    /**
                     * 设置<p>Resource id information</p>
                     * @param _resourceIn <p>Resource id information</p>
                     * 
                     */
                    void SetResourceIn(const std::vector<std::string>& _resourceIn);

                    /**
                     * 判断参数 ResourceIn 是否已赋值
                     * @return ResourceIn 是否已赋值
                     * 
                     */
                    bool ResourceInHasBeenSet() const;

                private:

                    /**
                     * <p>Contains product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_businessIn;
                    bool m_businessInHasBeenSet;

                    /**
                     * <p>Contains sub-product code</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_productIn;
                    bool m_productInHasBeenSet;

                    /**
                     * <p>Contains region id</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_regionIn;
                    bool m_regionInHasBeenSet;

                    /**
                     * <p>Contains transaction type</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_actionTypeIn;
                    bool m_actionTypeInHasBeenSet;

                    /**
                     * <p>Includes payment mode</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_payModeIn;
                    bool m_payModeInHasBeenSet;

                    /**
                     * <p>Include project name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_projectIn;
                    bool m_projectInHasBeenSet;

                    /**
                     * <p>Contains payer uin</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_payerUinIn;
                    bool m_payerUinInHasBeenSet;

                    /**
                     * <p>Tag key.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>Tag value list</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tagIn;
                    bool m_tagInHasBeenSet;

                    /**
                     * <p>Contains availability zones</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_zoneIn;
                    bool m_zoneInHasBeenSet;

                    /**
                     * <p>Owner uin</p>
                     */
                    std::vector<std::string> m_ownerUinIn;
                    bool m_ownerUinInHasBeenSet;

                    /**
                     * <p>Component type info</p>
                     */
                    std::vector<std::string> m_componentIn;
                    bool m_componentInHasBeenSet;

                    /**
                     * <p>Component name</p>
                     */
                    std::vector<std::string> m_itemIn;
                    bool m_itemInHasBeenSet;

                    /**
                     * <p>Resource id information</p>
                     */
                    std::vector<std::string> m_resourceIn;
                    bool m_resourceInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_COSTANALYZEFILTER_H_
