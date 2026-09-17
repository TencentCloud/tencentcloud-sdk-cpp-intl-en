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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return RoundPlayIds 
                     * 
                     */
                    std::vector<std::string> GetRoundPlayIds() const;

                    /**
                     * 设置
                     * @param _roundPlayIds 
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
                     * @return Status 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
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
                     * 获取
                     * @return UpdateTime 
                     * 
                     */
                    TimeRange GetUpdateTime() const;

                    /**
                     * 设置
                     * @param _updateTime 
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
                     * 获取
                     * @return ScrollToken 
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置
                     * @param _scrollToken 
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
                     * 获取
                     * @return Offset 
                     * @deprecated
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置
                     * @param _offset 
                     * @deprecated
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * @deprecated
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取
                     * @return Limit 
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置
                     * @param _limit 
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
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_roundPlayIds;
                    bool m_roundPlayIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    TimeRange m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSREQUEST_H_
