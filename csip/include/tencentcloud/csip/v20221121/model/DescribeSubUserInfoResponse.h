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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESUBUSERINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESUBUSERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SubUserInfo.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSubUserInfo response structure.
                */
                class DescribeSubUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeSubUserInfoResponse();
                    ~DescribeSubUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取total
                     * @return TotalCount total
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Sub-user list
                     * @return Data Sub-user list
                     * 
                     */
                    std::vector<SubUserInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Manufacturer Enumeration List
                     * @return CloudTypeLst Manufacturer Enumeration List
                     * 
                     */
                    std::vector<FilterDataObject> GetCloudTypeLst() const;

                    /**
                     * 判断参数 CloudTypeLst 是否已赋值
                     * @return CloudTypeLst 是否已赋值
                     * 
                     */
                    bool CloudTypeLstHasBeenSet() const;

                    /**
                     * 获取Enumeration of appid of the main account
                     * @return OwnerAppIDLst Enumeration of appid of the main account
                     * 
                     */
                    std::vector<FilterDataObject> GetOwnerAppIDLst() const;

                    /**
                     * 判断参数 OwnerAppIDLst 是否已赋值
                     * @return OwnerAppIDLst 是否已赋值
                     * 
                     */
                    bool OwnerAppIDLstHasBeenSet() const;

                private:

                    /**
                     * total
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Sub-user list
                     */
                    std::vector<SubUserInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Manufacturer Enumeration List
                     */
                    std::vector<FilterDataObject> m_cloudTypeLst;
                    bool m_cloudTypeLstHasBeenSet;

                    /**
                     * Enumeration of appid of the main account
                     */
                    std::vector<FilterDataObject> m_ownerAppIDLst;
                    bool m_ownerAppIDLstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESUBUSERINFORESPONSE_H_
