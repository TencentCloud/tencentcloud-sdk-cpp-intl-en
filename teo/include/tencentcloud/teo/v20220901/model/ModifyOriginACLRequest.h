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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginACLEntity.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyOriginACL request structure.
                */
                class ModifyOriginACLRequest : public AbstractModel
                {
                public:
                    ModifyOriginACLRequest();
                    ~ModifyOriginACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Origin protection mode for layer-7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-7 accelerated domains in the site will be automatically added to the origin protection list, including newly added layer-7 accelerated domains;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty; when the number of layer-7 accelerated domains under the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @return L7EnableMode <p>Origin protection mode for layer-7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-7 accelerated domains in the site will be automatically added to the origin protection list, including newly added layer-7 accelerated domains;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty; when the number of layer-7 accelerated domains under the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置<p>Origin protection mode for layer-7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-7 accelerated domains in the site will be automatically added to the origin protection list, including newly added layer-7 accelerated domains;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty; when the number of layer-7 accelerated domains under the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @param _l7EnableMode <p>Origin protection mode for layer-7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-7 accelerated domains in the site will be automatically added to the origin protection list, including newly added layer-7 accelerated domains;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty; when the number of layer-7 accelerated domains under the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * 
                     */
                    void SetL7EnableMode(const std::string& _l7EnableMode);

                    /**
                     * 判断参数 L7EnableMode 是否已赋值
                     * @return L7EnableMode 是否已赋值
                     * 
                     */
                    bool L7EnableModeHasBeenSet() const;

                    /**
                     * 获取<p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site will be automatically added to the origin protection list, including newly added layer-4 proxy instance resources;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty; when the number of layer-4 proxy instances under the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @return L4EnableMode <p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site will be automatically added to the origin protection list, including newly added layer-4 proxy instance resources;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty; when the number of layer-4 proxy instances under the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置<p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site will be automatically added to the origin protection list, including newly added layer-4 proxy instance resources;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty; when the number of layer-4 proxy instances under the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * @param _l4EnableMode <p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site will be automatically added to the origin protection list, including newly added layer-4 proxy instance resources;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty; when the number of layer-4 proxy instances under the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     * 
                     */
                    void SetL4EnableMode(const std::string& _l4EnableMode);

                    /**
                     * 判断参数 L4EnableMode 是否已赋值
                     * @return L4EnableMode 是否已赋值
                     * 
                     */
                    bool L4EnableModeHasBeenSet() const;

                    /**
                     * 获取<p>Instances for which origin-pull from specific origin IP ranges needs to be enabled or disabled.<br>Note: This parameter is only applicable to resource adjustment in <strong>Manual protection mode</strong>; When the origin protection mode of the corresponding level is all, the resource list of this type is automatically maintained by the system. Do not include resources of this type in this parameter. For manual adjustment, switch the corresponding level to specific through L7EnableMode/L4EnableMode first.</p>
                     * @return OriginACLEntities <p>Instances for which origin-pull from specific origin IP ranges needs to be enabled or disabled.<br>Note: This parameter is only applicable to resource adjustment in <strong>Manual protection mode</strong>; When the origin protection mode of the corresponding level is all, the resource list of this type is automatically maintained by the system. Do not include resources of this type in this parameter. For manual adjustment, switch the corresponding level to specific through L7EnableMode/L4EnableMode first.</p>
                     * 
                     */
                    std::vector<OriginACLEntity> GetOriginACLEntities() const;

                    /**
                     * 设置<p>Instances for which origin-pull from specific origin IP ranges needs to be enabled or disabled.<br>Note: This parameter is only applicable to resource adjustment in <strong>Manual protection mode</strong>; When the origin protection mode of the corresponding level is all, the resource list of this type is automatically maintained by the system. Do not include resources of this type in this parameter. For manual adjustment, switch the corresponding level to specific through L7EnableMode/L4EnableMode first.</p>
                     * @param _originACLEntities <p>Instances for which origin-pull from specific origin IP ranges needs to be enabled or disabled.<br>Note: This parameter is only applicable to resource adjustment in <strong>Manual protection mode</strong>; When the origin protection mode of the corresponding level is all, the resource list of this type is automatically maintained by the system. Do not include resources of this type in this parameter. For manual adjustment, switch the corresponding level to specific through L7EnableMode/L4EnableMode first.</p>
                     * 
                     */
                    void SetOriginACLEntities(const std::vector<OriginACLEntity>& _originACLEntities);

                    /**
                     * 判断参数 OriginACLEntities 是否已赋值
                     * @return OriginACLEntities 是否已赋值
                     * 
                     */
                    bool OriginACLEntitiesHasBeenSet() const;

                    /**
                     * 获取<p>Origin protection origin-pull ACL control domain. If not filled in, it remains unchanged by default; Control domain information can be obtained through the DescribeAvailableOriginACLFamily API.<br>Specific values are described as follows:</p><li>gaz: Standard global AZ control domain;</li><li>mlc: Standard Chinese mainland AZ control domain;</li><li>emc: Standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: Simplified global AZ control domain;</li><li>plat-mlc: Simplified Chinese mainland AZ control domain;</li><li>plat-emc: Simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * @return OriginACLFamily <p>Origin protection origin-pull ACL control domain. If not filled in, it remains unchanged by default; Control domain information can be obtained through the DescribeAvailableOriginACLFamily API.<br>Specific values are described as follows:</p><li>gaz: Standard global AZ control domain;</li><li>mlc: Standard Chinese mainland AZ control domain;</li><li>emc: Standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: Simplified global AZ control domain;</li><li>plat-mlc: Simplified Chinese mainland AZ control domain;</li><li>plat-emc: Simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置<p>Origin protection origin-pull ACL control domain. If not filled in, it remains unchanged by default; Control domain information can be obtained through the DescribeAvailableOriginACLFamily API.<br>Specific values are described as follows:</p><li>gaz: Standard global AZ control domain;</li><li>mlc: Standard Chinese mainland AZ control domain;</li><li>emc: Standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: Simplified global AZ control domain;</li><li>plat-mlc: Simplified Chinese mainland AZ control domain;</li><li>plat-emc: Simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * @param _originACLFamily <p>Origin protection origin-pull ACL control domain. If not filled in, it remains unchanged by default; Control domain information can be obtained through the DescribeAvailableOriginACLFamily API.<br>Specific values are described as follows:</p><li>gaz: Standard global AZ control domain;</li><li>mlc: Standard Chinese mainland AZ control domain;</li><li>emc: Standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: Simplified global AZ control domain;</li><li>plat-mlc: Simplified Chinese mainland AZ control domain;</li><li>plat-emc: Simplified global (excluding Chinese mainland) AZ control domain;</li>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Origin protection mode for layer-7 accelerated domains. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-7 accelerated domains in the site will be automatically added to the origin protection list, including newly added layer-7 accelerated domains;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-7 accelerated domains to be added to origin protection (specified by the L7Hosts parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L7Hosts empty; when the number of layer-7 accelerated domains under the site exceeds 200, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * <p>Origin protection mode for layer-4 proxy instances. Default value: specific.<li>all: <strong>Automatic protection mode</strong>. All layer-4 proxy instances in the site will be automatically added to the origin protection list, including newly added layer-4 proxy instance resources;</li><li>specific: <strong>Manual protection mode</strong>. You need to manually specify the layer-4 proxy instances to be added to origin protection (specified by the L4ProxyIds parameter). Resources not specified will not be added to the origin protection list. Subsequent protection resource adjustments can be made through the ModifyOriginACL API.</li>Note: When the value is all, leave L4ProxyIds empty; when the number of layer-4 proxy instances under the site exceeds 100, enable protection in specific mode first, enable the remaining resources through the ModifyOriginACL API, and then switch to all through the ModifyOriginACL API.</p>
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * <p>Instances for which origin-pull from specific origin IP ranges needs to be enabled or disabled.<br>Note: This parameter is only applicable to resource adjustment in <strong>Manual protection mode</strong>; When the origin protection mode of the corresponding level is all, the resource list of this type is automatically maintained by the system. Do not include resources of this type in this parameter. For manual adjustment, switch the corresponding level to specific through L7EnableMode/L4EnableMode first.</p>
                     */
                    std::vector<OriginACLEntity> m_originACLEntities;
                    bool m_originACLEntitiesHasBeenSet;

                    /**
                     * <p>Origin protection origin-pull ACL control domain. If not filled in, it remains unchanged by default; Control domain information can be obtained through the DescribeAvailableOriginACLFamily API.<br>Specific values are described as follows:</p><li>gaz: Standard global AZ control domain;</li><li>mlc: Standard Chinese mainland AZ control domain;</li><li>emc: Standard global (excluding Chinese mainland) AZ control domain;</li><li>plat-gaz: Simplified global AZ control domain;</li><li>plat-mlc: Simplified Chinese mainland AZ control domain;</li><li>plat-emc: Simplified global (excluding Chinese mainland) AZ control domain;</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINACLREQUEST_H_
