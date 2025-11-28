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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBRSITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBRSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Querying the input data types
                */
                class LbRsItem : public AbstractModel
                {
                public:
                    LbRsItem();
                    ~LbRsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID in string format. Only string format is supported.
Can be queried through the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api.
                     * @return VpcId VPC ID in string format. Only string format is supported.
Can be queried through the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in string format. Only string format is supported.
Can be queried through the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api.
                     * @param _vpcId VPC ID in string format. Only string format is supported.
Can be queried through the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Specifies the private IP address for backend querying, which can be CVM or eni.
Can be queried through the [DescribeAddresses](https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1) api.
                     * @return PrivateIp Specifies the private IP address for backend querying, which can be CVM or eni.
Can be queried through the [DescribeAddresses](https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Specifies the private IP address for backend querying, which can be CVM or eni.
Can be queried through the [DescribeAddresses](https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1) api.
                     * @param _privateIp Specifies the private IP address for backend querying, which can be CVM or eni.
Can be queried through the [DescribeAddresses](https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1) api.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                private:

                    /**
                     * VPC ID in string format. Only string format is supported.
Can be queried through the [DescribeVpcs](https://www.tencentcloud.comom/document/api/215/15778?from_cn_redirect=1) api.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Specifies the private IP address for backend querying, which can be CVM or eni.
Can be queried through the [DescribeAddresses](https://www.tencentcloud.comom/document/product/215/16702?from_cn_redirect=1) api.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBRSITEM_H_
