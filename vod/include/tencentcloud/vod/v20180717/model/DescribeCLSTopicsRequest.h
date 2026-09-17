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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSTOPICSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSTOPICSREQUEST_H_

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
                * DescribeCLSTopics request structure.
                */
                class DescribeCLSTopicsRequest : public AbstractModel
                {
                public:
                    DescribeCLSTopicsRequest();
                    ~DescribeCLSTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return CLSRegion 
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置
                     * @param _cLSRegion 
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取
                     * @return LogsetId 
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置
                     * @param _logsetId 
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return TopicIds 
                     * 
                     */
                    std::vector<std::string> GetTopicIds() const;

                    /**
                     * 设置
                     * @param _topicIds 
                     * 
                     */
                    void SetTopicIds(const std::vector<std::string>& _topicIds);

                    /**
                     * 判断参数 TopicIds 是否已赋值
                     * @return TopicIds 是否已赋值
                     * 
                     */
                    bool TopicIdsHasBeenSet() const;

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
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_topicIds;
                    bool m_topicIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSTOPICSREQUEST_H_
