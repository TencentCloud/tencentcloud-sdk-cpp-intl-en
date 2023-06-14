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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLIENTUPLOADACCELERATIONUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLIENTUPLOADACCELERATIONUSAGEDATAREQUEST_H_

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
                * DescribeClientUploadAccelerationUsageData request structure.
                */
                class DescribeClientUploadAccelerationUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeClientUploadAccelerationUsageDataRequest();
                    ~DescribeClientUploadAccelerationUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @return StartTime The start date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * @param _startTime The start date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format). The end date must be later than the start date.
                     * @return EndTime The end date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format). The end date must be later than the start date.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format). The end date must be later than the start date.
                     * @param _endTime The end date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format). The end date must be later than the start date.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 获取The client upload acceleration type. Valid values:
<li> AccelerationWithHTTP: Acceleration of HTTP transmission</li>
<li> AccelerationWithQUIC: Acceleration of QUIC transmission</li>
If you do not specify this parameter, the usage of both types will be queried.
                     * @return Type The client upload acceleration type. Valid values:
<li> AccelerationWithHTTP: Acceleration of HTTP transmission</li>
<li> AccelerationWithQUIC: Acceleration of QUIC transmission</li>
If you do not specify this parameter, the usage of both types will be queried.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The client upload acceleration type. Valid values:
<li> AccelerationWithHTTP: Acceleration of HTTP transmission</li>
<li> AccelerationWithQUIC: Acceleration of QUIC transmission</li>
If you do not specify this parameter, the usage of both types will be queried.
                     * @param _type The client upload acceleration type. Valid values:
<li> AccelerationWithHTTP: Acceleration of HTTP transmission</li>
<li> AccelerationWithQUIC: Acceleration of QUIC transmission</li>
If you do not specify this parameter, the usage of both types will be queried.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * The start date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end date for the query in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format). The end date must be later than the start date.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The client upload acceleration type. Valid values:
<li> AccelerationWithHTTP: Acceleration of HTTP transmission</li>
<li> AccelerationWithQUIC: Acceleration of QUIC transmission</li>
If you do not specify this parameter, the usage of both types will be queried.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLIENTUPLOADACCELERATIONUSAGEDATAREQUEST_H_
