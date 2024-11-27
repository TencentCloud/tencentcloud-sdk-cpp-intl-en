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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERCLBWAFREGIONSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERCLBWAFREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeUserClbWafRegions request structure.
                */
                class DescribeUserClbWafRegionsRequest : public AbstractModel
                {
                public:
                    DescribeUserClbWafRegionsRequest();
                    ~DescribeUserClbWafRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Traffic source. The default value is clb if not specified. clb: Cloud Load Balancer; tsegw: cloud-native API gateway; scf: Serverless Cloud Function; apisix: other gateways on Tencent Cloud.
                     * @return AlbType Traffic source. The default value is clb if not specified. clb: Cloud Load Balancer; tsegw: cloud-native API gateway; scf: Serverless Cloud Function; apisix: other gateways on Tencent Cloud.
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置Traffic source. The default value is clb if not specified. clb: Cloud Load Balancer; tsegw: cloud-native API gateway; scf: Serverless Cloud Function; apisix: other gateways on Tencent Cloud.
                     * @param _albType Traffic source. The default value is clb if not specified. clb: Cloud Load Balancer; tsegw: cloud-native API gateway; scf: Serverless Cloud Function; apisix: other gateways on Tencent Cloud.
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                private:

                    /**
                     * Traffic source. The default value is clb if not specified. clb: Cloud Load Balancer; tsegw: cloud-native API gateway; scf: Serverless Cloud Function; apisix: other gateways on Tencent Cloud.
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERCLBWAFREGIONSREQUEST_H_
