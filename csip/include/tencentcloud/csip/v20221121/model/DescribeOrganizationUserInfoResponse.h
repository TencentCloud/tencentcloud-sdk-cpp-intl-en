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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEORGANIZATIONUSERINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEORGANIZATIONUSERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/OrganizationUserInfo.h>
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
                * DescribeOrganizationUserInfo response structure.
                */
                class DescribeOrganizationUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationUserInfoResponse();
                    ~DescribeOrganizationUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of items
                     * @return TotalCount Total number of items
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
                     * 获取Group User List
                     * @return Data Group User List
                     * 
                     */
                    std::vector<OrganizationUserInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Join method enumeration
                     * @return JoinTypeLst Join method enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetJoinTypeLst() const;

                    /**
                     * 判断参数 JoinTypeLst 是否已赋值
                     * @return JoinTypeLst 是否已赋值
                     * 
                     */
                    bool JoinTypeLstHasBeenSet() const;

                    /**
                     * 获取Cloud vendor enumeration
                     * @return CloudTypeLst Cloud vendor enumeration
                     * 
                     */
                    std::vector<FilterDataObject> GetCloudTypeLst() const;

                    /**
                     * 判断参数 CloudTypeLst 是否已赋值
                     * @return CloudTypeLst 是否已赋值
                     * 
                     */
                    bool CloudTypeLstHasBeenSet() const;

                private:

                    /**
                     * Total number of items
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Group User List
                     */
                    std::vector<OrganizationUserInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Join method enumeration
                     */
                    std::vector<FilterDataObject> m_joinTypeLst;
                    bool m_joinTypeLstHasBeenSet;

                    /**
                     * Cloud vendor enumeration
                     */
                    std::vector<FilterDataObject> m_cloudTypeLst;
                    bool m_cloudTypeLstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEORGANIZATIONUSERINFORESPONSE_H_
