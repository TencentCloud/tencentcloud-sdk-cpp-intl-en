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
                     * 获取<p>Start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @return StartTime <p>Start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @param _startTime <p>Start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
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
                     * 获取<p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @return EndTime <p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     * @param _endTime <p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
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
                     * 获取<p>AIGC type.</p><p>Enumeration values:</p><ul><li>Video: Video</li><li>Image: Image</li><li>Text: Text</li><li>Audio: Audio</li><li>SceneAigcVideo: Scenario-based video processing</li><li>SceneAigcImage: Scenario-based image processing</li><li>SceneAigcTime: Scenario-based processing times</li><li>TextDetail: Text detailed record</li></ul>
                     * @return AigcType <p>AIGC type.</p><p>Enumeration values:</p><ul><li>Video: Video</li><li>Image: Image</li><li>Text: Text</li><li>Audio: Audio</li><li>SceneAigcVideo: Scenario-based video processing</li><li>SceneAigcImage: Scenario-based image processing</li><li>SceneAigcTime: Scenario-based processing times</li><li>TextDetail: Text detailed record</li></ul>
                     * 
                     */
                    std::string GetAigcType() const;

                    /**
                     * 设置<p>AIGC type.</p><p>Enumeration values:</p><ul><li>Video: Video</li><li>Image: Image</li><li>Text: Text</li><li>Audio: Audio</li><li>SceneAigcVideo: Scenario-based video processing</li><li>SceneAigcImage: Scenario-based image processing</li><li>SceneAigcTime: Scenario-based processing times</li><li>TextDetail: Text detailed record</li></ul>
                     * @param _aigcType <p>AIGC type.</p><p>Enumeration values:</p><ul><li>Video: Video</li><li>Image: Image</li><li>Text: Text</li><li>Audio: Audio</li><li>SceneAigcVideo: Scenario-based video processing</li><li>SceneAigcImage: Scenario-based image processing</li><li>SceneAigcTime: Scenario-based processing times</li><li>TextDetail: Text detailed record</li></ul>
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
                     * 获取<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>API Key</p>
                     * @return APIKey <p>API Key</p>
                     * 
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置<p>API Key</p>
                     * @param _aPIKey <p>API Key</p>
                     * 
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * 
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取<p>API Key</p>
                     * @return APIKeys <p>API Key</p>
                     * 
                     */
                    std::vector<std::string> GetAPIKeys() const;

                    /**
                     * 设置<p>API Key</p>
                     * @param _aPIKeys <p>API Key</p>
                     * 
                     */
                    void SetAPIKeys(const std::vector<std::string>& _aPIKeys);

                    /**
                     * 判断参数 APIKeys 是否已赋值
                     * @return APIKeys 是否已赋值
                     * 
                     */
                    bool APIKeysHasBeenSet() const;

                    /**
                     * 获取<p>Query cursor</p>
                     * @return ScrollToken <p>Query cursor</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>Query cursor</p>
                     * @param _scrollToken <p>Query cursor</p>
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
                     * 获取<p>Size per page, maximum 200, it will be truncated to 200</p>
                     * @return PageSize <p>Size per page, maximum 200, it will be truncated to 200</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page, maximum 200, it will be truncated to 200</p>
                     * @param _pageSize <p>Size per page, maximum 200, it will be truncated to 200</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>RequestId of the raw text. Valid at that time when AigcType is TextDetail.</p>
                     * @return ReqId <p>RequestId of the raw text. Valid at that time when AigcType is TextDetail.</p>
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置<p>RequestId of the raw text. Valid at that time when AigcType is TextDetail.</p>
                     * @param _reqId <p>RequestId of the raw text. Valid at that time when AigcType is TextDetail.</p>
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                private:

                    /**
                     * <p>Start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End date, which must be greater than or equal to the start date. Use the <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52">ISO date format</a>.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>AIGC type.</p><p>Enumeration values:</p><ul><li>Video: Video</li><li>Image: Image</li><li>Text: Text</li><li>Audio: Audio</li><li>SceneAigcVideo: Scenario-based video processing</li><li>SceneAigcImage: Scenario-based image processing</li><li>SceneAigcTime: Scenario-based processing times</li><li>TextDetail: Text detailed record</li></ul>
                     */
                    std::string m_aigcType;
                    bool m_aigcTypeHasBeenSet;

                    /**
                     * <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>API Key</p>
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * <p>API Key</p>
                     */
                    std::vector<std::string> m_aPIKeys;
                    bool m_aPIKeysHasBeenSet;

                    /**
                     * <p>Query cursor</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>Size per page, maximum 200, it will be truncated to 200</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>RequestId of the raw text. Valid at that time when AigcType is TextDetail.</p>
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_
