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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * ModifyAutoRenewFlag request structure.
                */
                class ModifyAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyAutoRenewFlagRequest();
                    ~ModifyAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subproduct ID. To obtain this ID, call the `DescribeUserResources` API and find the subproduct ID of the monthly feature package with the level 1. Usually the value is `sp_tiw_package`.
                     * @return SubProduct Subproduct ID. To obtain this ID, call the `DescribeUserResources` API and find the subproduct ID of the monthly feature package with the level 1. Usually the value is `sp_tiw_package`.
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置Subproduct ID. To obtain this ID, call the `DescribeUserResources` API and find the subproduct ID of the monthly feature package with the level 1. Usually the value is `sp_tiw_package`.
                     * @param SubProduct Subproduct ID. To obtain this ID, call the `DescribeUserResources` API and find the subproduct ID of the monthly feature package with the level 1. Usually the value is `sp_tiw_package`.
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取Resource ID. To obtain this ID, call the `DescribeUserResources` API and find the resource ID of the monthly feature package with the level 1.
                     * @return ResourceId Resource ID. To obtain this ID, call the `DescribeUserResources` API and find the resource ID of the monthly feature package with the level 1.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. To obtain this ID, call the `DescribeUserResources` API and find the resource ID of the monthly feature package with the level 1.
                     * @param ResourceId Resource ID. To obtain this ID, call the `DescribeUserResources` API and find the resource ID of the monthly feature package with the level 1.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Renewal mode. Valid values: `0` (default mode, which is auto-renewal), `1` (auto-renewal), `2` (manual renewal, which is specified by users). If no renewal is required, set it to `0`.
                     * @return AutoRenewFlag Renewal mode. Valid values: `0` (default mode, which is auto-renewal), `1` (auto-renewal), `2` (manual renewal, which is specified by users). If no renewal is required, set it to `0`.
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal mode. Valid values: `0` (default mode, which is auto-renewal), `1` (auto-renewal), `2` (manual renewal, which is specified by users). If no renewal is required, set it to `0`.
                     * @param AutoRenewFlag Renewal mode. Valid values: `0` (default mode, which is auto-renewal), `1` (auto-renewal), `2` (manual renewal, which is specified by users). If no renewal is required, set it to `0`.
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * Subproduct ID. To obtain this ID, call the `DescribeUserResources` API and find the subproduct ID of the monthly feature package with the level 1. Usually the value is `sp_tiw_package`.
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * Resource ID. To obtain this ID, call the `DescribeUserResources` API and find the resource ID of the monthly feature package with the level 1.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Renewal mode. Valid values: `0` (default mode, which is auto-renewal), `1` (auto-renewal), `2` (manual renewal, which is specified by users). If no renewal is required, set it to `0`.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
