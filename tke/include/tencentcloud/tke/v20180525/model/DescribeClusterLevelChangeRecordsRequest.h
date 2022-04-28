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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERLEVELCHANGERECORDSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERLEVELCHANGERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterLevelChangeRecords request structure.
                */
                class DescribeClusterLevelChangeRecordsRequest : public AbstractModel
                {
                public:
                    DescribeClusterLevelChangeRecordsRequest();
                    ~DescribeClusterLevelChangeRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterID Cluster ID
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartAt Start time
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Start time
                     * @param StartAt Start time
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndAt End time
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置End time
                     * @param EndAt End time
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`
                     * @return Offset Offset. Default value: `0`
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`
                     * @param Offset Offset. Default value: `0`
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of output entries. Default value: `20`
                     * @return Limit Maximum number of output entries. Default value: `20`
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: `20`
                     * @param Limit Maximum number of output entries. Default value: `20`
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * Offset. Default value: `0`
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: `20`
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERLEVELCHANGERECORDSREQUEST_H_
