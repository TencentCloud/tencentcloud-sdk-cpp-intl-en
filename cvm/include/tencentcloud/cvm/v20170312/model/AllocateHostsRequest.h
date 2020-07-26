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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ALLOCATEHOSTSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ALLOCATEHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/ChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AllocateHosts request structure.
                */
                class AllocateHostsRequest : public AbstractModel
                {
                public:
                    AllocateHostsRequest();
                    ~AllocateHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance location. This parameter is used to specify the attributes of an instance, such as its availability zone and project.
                     * @return Placement Instance location. This parameter is used to specify the attributes of an instance, such as its availability zone and project.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Instance location. This parameter is used to specify the attributes of an instance, such as its availability zone and project.
                     * @param Placement Instance location. This parameter is used to specify the attributes of an instance, such as its availability zone and project.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取A string used to ensure the idempotency of the request.
                     * @return ClientToken A string used to ensure the idempotency of the request.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotency of the request.
                     * @param ClientToken A string used to ensure the idempotency of the request.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     * @return HostChargePrepaid Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     */
                    ChargePrepaid GetHostChargePrepaid() const;

                    /**
                     * 设置Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     * @param HostChargePrepaid Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     */
                    void SetHostChargePrepaid(const ChargePrepaid& _hostChargePrepaid);

                    /**
                     * 判断参数 HostChargePrepaid 是否已赋值
                     * @return HostChargePrepaid 是否已赋值
                     */
                    bool HostChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Instance billing model, only monthly or yearly subscription supported. Default value: `PREPAID'.
                     * @return HostChargeType Instance billing model, only monthly or yearly subscription supported. Default value: `PREPAID'.
                     */
                    std::string GetHostChargeType() const;

                    /**
                     * 设置Instance billing model, only monthly or yearly subscription supported. Default value: `PREPAID'.
                     * @param HostChargeType Instance billing model, only monthly or yearly subscription supported. Default value: `PREPAID'.
                     */
                    void SetHostChargeType(const std::string& _hostChargeType);

                    /**
                     * 判断参数 HostChargeType 是否已赋值
                     * @return HostChargeType 是否已赋值
                     */
                    bool HostChargeTypeHasBeenSet() const;

                    /**
                     * 获取CDH instance model. Default value: `HS1`.
                     * @return HostType CDH instance model. Default value: `HS1`.
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置CDH instance model. Default value: `HS1`.
                     * @param HostType CDH instance model. Default value: `HS1`.
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取Quantity of CDH instances purchased. Default value: 1.
                     * @return HostCount Quantity of CDH instances purchased. Default value: 1.
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置Quantity of CDH instances purchased. Default value: 1.
                     * @param HostCount Quantity of CDH instances purchased. Default value: 1.
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Tag description. You can specify the parameter to associate a tag with an instance.
                     * @return TagSpecification Tag description. You can specify the parameter to associate a tag with an instance.
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置Tag description. You can specify the parameter to associate a tag with an instance.
                     * @param TagSpecification Tag description. You can specify the parameter to associate a tag with an instance.
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Instance location. This parameter is used to specify the attributes of an instance, such as its availability zone and project.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * A string used to ensure the idempotency of the request.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Configuration of prepaid instances. You can use the parameter to specify the attributes of prepaid instances, such as the subscription period and the auto-renewal plan. This parameter is required for prepaid instances.
                     */
                    ChargePrepaid m_hostChargePrepaid;
                    bool m_hostChargePrepaidHasBeenSet;

                    /**
                     * Instance billing model, only monthly or yearly subscription supported. Default value: `PREPAID'.
                     */
                    std::string m_hostChargeType;
                    bool m_hostChargeTypeHasBeenSet;

                    /**
                     * CDH instance model. Default value: `HS1`.
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * Quantity of CDH instances purchased. Default value: 1.
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Tag description. You can specify the parameter to associate a tag with an instance.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ALLOCATEHOSTSREQUEST_H_
