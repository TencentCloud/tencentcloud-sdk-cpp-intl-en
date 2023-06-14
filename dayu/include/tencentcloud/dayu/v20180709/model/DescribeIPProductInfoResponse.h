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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPPRODUCTINFORESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPPRODUCTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeIPProductInfo response structure.
                */
                class DescribeIPProductInfoResponse : public AbstractModel
                {
                public:
                    DescribeIPProductInfoResponse();
                    ~DescribeIPProductInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Tencent Cloud product information list. If nothing is found, an empty array will be returned. Valid values:
If `Key` is ProductName, `value` indicates the name of a Tencent Cloud product instance;
If `Key` is `ProductInstanceId`, `value` indicates the ID of a Tencent Cloud product instance;
If `Key` is `ProductType`, `value` indicates the Tencent Cloud product type (cvm: CVM, clb: CLB);
If `Key` is `IP`, `value` indicates the IP of a Tencent Cloud product instance;
                     * @return Data Tencent Cloud product information list. If nothing is found, an empty array will be returned. Valid values:
If `Key` is ProductName, `value` indicates the name of a Tencent Cloud product instance;
If `Key` is `ProductInstanceId`, `value` indicates the ID of a Tencent Cloud product instance;
If `Key` is `ProductType`, `value` indicates the Tencent Cloud product type (cvm: CVM, clb: CLB);
If `Key` is `IP`, `value` indicates the IP of a Tencent Cloud product instance;
                     * 
                     */
                    std::vector<KeyValueRecord> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud product information list. If nothing is found, an empty array will be returned. Valid values:
If `Key` is ProductName, `value` indicates the name of a Tencent Cloud product instance;
If `Key` is `ProductInstanceId`, `value` indicates the ID of a Tencent Cloud product instance;
If `Key` is `ProductType`, `value` indicates the Tencent Cloud product type (cvm: CVM, clb: CLB);
If `Key` is `IP`, `value` indicates the IP of a Tencent Cloud product instance;
                     */
                    std::vector<KeyValueRecord> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPPRODUCTINFORESPONSE_H_
