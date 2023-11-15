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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVPCASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVPCASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Vpc.h>
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
                * DescribeVpcAssets response structure.
                */
                class DescribeVpcAssetsResponse : public AbstractModel
                {
                public:
                    DescribeVpcAssetsResponse();
                    ~DescribeVpcAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data list
                     * @return Data Data list
                     * 
                     */
                    std::vector<Vpc> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of results
                     * @return TotalCount Total number of results
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of VPCs
                     * @return VpcList List of VPCs
                     * 
                     */
                    std::vector<FilterDataObject> GetVpcList() const;

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取List of regions
                     * @return RegionList List of regions
                     * 
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取List of AppIds
                     * @return AppIdList List of AppIds
                     * 
                     */
                    std::vector<FilterDataObject> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                private:

                    /**
                     * Data list
                     */
                    std::vector<Vpc> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of results
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of VPCs
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * List of regions
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * List of AppIds
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVPCASSETSRESPONSE_H_
