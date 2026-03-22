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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_

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
                * DescribeAigcUsageData request structure.
                */
                class DescribeAigcUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeAigcUsageDataRequest();
                    ~DescribeAigcUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return StartTime Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _startTime Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
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
                     * 获取End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return EndTime End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _endTime End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
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
                     * 获取AIGC type. Valid values: <li>Video: video.</li><li>Image: image.</li><li>Text: text.</li>
                     * @return AigcType AIGC type. Valid values: <li>Video: video.</li><li>Image: image.</li><li>Text: text.</li>
                     * 
                     */
                    std::string GetAigcType() const;

                    /**
                     * 设置AIGC type. Valid values: <li>Video: video.</li><li>Image: image.</li><li>Text: text.</li>
                     * @param _aigcType AIGC type. Valid values: <li>Video: video.</li><li>Image: image.</li><li>Text: text.</li>
                     * 
                     */
                    void SetAigcType(const std::string& _aigcType);

                    /**
                     * 判断参数 AigcType 是否已赋值
                     * @return AigcType 是否已赋值
                     * 
                     */
                    bool AigcTypeHasBeenSet() const;

                    /**
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End date, which must be greater than or equal to the start date. Use the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * AIGC type. Valid values: <li>Video: video.</li><li>Image: image.</li><li>Text: text.</li>
                     */
                    std::string m_aigcType;
                    bool m_aigcTypeHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_
