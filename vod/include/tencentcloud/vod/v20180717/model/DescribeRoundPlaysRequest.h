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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TimeRange.h>


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
                     * 获取<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * @return SubAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * @param _subAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
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
                     * 获取Filter criteria: playlist identifier, array length limit: 100.
                     * @return RoundPlayIds Filter criteria: playlist identifier, array length limit: 100.
                     * 
                     */
                    std::vector<std::string> GetRoundPlayIds() const;

                    /**
                     * 设置Filter criteria: playlist identifier, array length limit: 100.
                     * @param _roundPlayIds Filter criteria: playlist identifier, array length limit: 100.
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
                     * 获取Filter criteria: playlist status, optional values: <li>enabled: startup status;</li> <li>disabled: stopped status.</li>.
                     * @return Status Filter criteria: playlist status, optional values: <li>enabled: startup status;</li> <li>disabled: stopped status.</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Filter criteria: playlist status, optional values: <li>enabled: startup status;</li> <li>disabled: stopped status.</li>.
                     * @param _status Filter criteria: playlist status, optional values: <li>enabled: startup status;</li> <li>disabled: stopped status.</li>.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Filter criteria: playlist creation time.
                     * @return CreateTime Filter criteria: playlist creation time.
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置Filter criteria: playlist creation time.
                     * @param _createTime Filter criteria: playlist creation time.
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Filter criteria: playlist update time.
                     * @return UpdateTime Filter criteria: playlist update time.
                     * 
                     */
                    TimeRange GetUpdateTime() const;

                    /**
                     * 设置Filter criteria: playlist update time.
                     * @param _updateTime Filter criteria: playlist update time.
                     * 
                     */
                    void SetUpdateTime(const TimeRange& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Scrolling identifier which is used for pulling in batches. if a single request cannot pull all the data entries, the API will return `scrolltoken`, and if the next request carries it, the next pull will start from the next entry.
                     * @return ScrollToken Scrolling identifier which is used for pulling in batches. if a single request cannot pull all the data entries, the API will return `scrolltoken`, and if the next request carries it, the next pull will start from the next entry.
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置Scrolling identifier which is used for pulling in batches. if a single request cannot pull all the data entries, the API will return `scrolltoken`, and if the next request carries it, the next pull will start from the next entry.
                     * @param _scrollToken Scrolling identifier which is used for pulling in batches. if a single request cannot pull all the data entries, the API will return `scrolltoken`, and if the next request carries it, the next pull will start from the next entry.
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取Pagination offset, default value: 0. this field is obsolete. please use the `scrolltoken` parameter for batch queries.
                     * @return Offset Pagination offset, default value: 0. this field is obsolete. please use the `scrolltoken` parameter for batch queries.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, default value: 0. this field is obsolete. please use the `scrolltoken` parameter for batch queries.
                     * @param _offset Pagination offset, default value: 0. this field is obsolete. please use the `scrolltoken` parameter for batch queries.
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
                     * 获取Number of returned entries. default value: 10. maximum value: 100.
                     * @return Limit Number of returned entries. default value: 10. maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. default value: 10. maximum value: 100.
                     * @param _limit Number of returned entries. default value: 10. maximum value: 100.
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
                     * <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Filter criteria: playlist identifier, array length limit: 100.
                     */
                    std::vector<std::string> m_roundPlayIds;
                    bool m_roundPlayIdsHasBeenSet;

                    /**
                     * Filter criteria: playlist status, optional values: <li>enabled: startup status;</li> <li>disabled: stopped status.</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Filter criteria: playlist creation time.
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Filter criteria: playlist update time.
                     */
                    TimeRange m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Scrolling identifier which is used for pulling in batches. if a single request cannot pull all the data entries, the API will return `scrolltoken`, and if the next request carries it, the next pull will start from the next entry.
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * Pagination offset, default value: 0. this field is obsolete. please use the `scrolltoken` parameter for batch queries.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. default value: 10. maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_
