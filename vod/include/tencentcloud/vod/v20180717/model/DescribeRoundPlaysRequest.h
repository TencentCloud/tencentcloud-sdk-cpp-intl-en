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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeRoundPlays request structure.
                */
                class DescribeRoundPlaysRequest : public AbstractModel
                {
                public:
                    DescribeRoundPlaysRequest();
                    ~DescribeRoundPlaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The playlist IDs. Array length limit: 100.
                     * @return RoundPlayIds The playlist IDs. Array length limit: 100.
                     * 
                     */
                    std::vector<std::string> GetRoundPlayIds() const;

                    /**
                     * 设置The playlist IDs. Array length limit: 100.
                     * @param _roundPlayIds The playlist IDs. Array length limit: 100.
                     * 
                     */
                    void SetRoundPlayIds(const std::vector<std::string>& _roundPlayIds);

                    /**
                     * 判断参数 RoundPlayIds 是否已赋值
                     * @return RoundPlayIds 是否已赋值
                     * 
                     */
                    bool RoundPlayIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Offset 
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置
                     * @param _offset 
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of records to return. Default value: 10. Maximum value: 100.
                     * @return Limit The number of records to return. Default value: 10. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of records to return. Default value: 10. Maximum value: 100.
                     * @param _limit The number of records to return. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The playlist IDs. Array length limit: 100.
                     */
                    std::vector<std::string> m_roundPlayIds;
                    bool m_roundPlayIdsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of records to return. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_
