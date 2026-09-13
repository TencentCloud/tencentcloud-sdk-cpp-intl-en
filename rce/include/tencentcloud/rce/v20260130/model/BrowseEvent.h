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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_BROWSEEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_BROWSEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Browse event details
                */
                class BrowseEvent : public AbstractModel
                {
                public:
                    BrowseEvent();
                    ~BrowseEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Current page type such as home page, search page</p>
                     * @return PageType <p>Current page type such as home page, search page</p>
                     * 
                     */
                    std::string GetPageType() const;

                    /**
                     * 设置<p>Current page type such as home page, search page</p>
                     * @param _pageType <p>Current page type such as home page, search page</p>
                     * 
                     */
                    void SetPageType(const std::string& _pageType);

                    /**
                     * 判断参数 PageType 是否已赋值
                     * @return PageType 是否已赋值
                     * 
                     */
                    bool PageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Currently page URL</p>
                     * @return PageUrl <p>Currently page URL</p>
                     * 
                     */
                    std::string GetPageUrl() const;

                    /**
                     * 设置<p>Currently page URL</p>
                     * @param _pageUrl <p>Currently page URL</p>
                     * 
                     */
                    void SetPageUrl(const std::string& _pageUrl);

                    /**
                     * 判断参数 PageUrl 是否已赋值
                     * @return PageUrl 是否已赋值
                     * 
                     */
                    bool PageUrlHasBeenSet() const;

                    /**
                     * 获取<p>Browsing duration</p><p>Measurement unit: ms</p>
                     * @return Duration <p>Browsing duration</p><p>Measurement unit: ms</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>Browsing duration</p><p>Measurement unit: ms</p>
                     * @param _duration <p>Browsing duration</p><p>Measurement unit: ms</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>The type of the content in current page such as ad, video, article</p>
                     * @return ContentType <p>The type of the content in current page such as ad, video, article</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>The type of the content in current page such as ad, video, article</p>
                     * @param _contentType <p>The type of the content in current page such as ad, video, article</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>The ID of the content in current page</p>
                     * @return ContentId <p>The ID of the content in current page</p>
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置<p>The ID of the content in current page</p>
                     * @param _contentId <p>The ID of the content in current page</p>
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取<p>Previous page type such as home page, search page</p>
                     * @return ReferPageType <p>Previous page type such as home page, search page</p>
                     * 
                     */
                    std::string GetReferPageType() const;

                    /**
                     * 设置<p>Previous page type such as home page, search page</p>
                     * @param _referPageType <p>Previous page type such as home page, search page</p>
                     * 
                     */
                    void SetReferPageType(const std::string& _referPageType);

                    /**
                     * 判断参数 ReferPageType 是否已赋值
                     * @return ReferPageType 是否已赋值
                     * 
                     */
                    bool ReferPageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Previous page URL</p>
                     * @return ReferPageUrl <p>Previous page URL</p>
                     * 
                     */
                    std::string GetReferPageUrl() const;

                    /**
                     * 设置<p>Previous page URL</p>
                     * @param _referPageUrl <p>Previous page URL</p>
                     * 
                     */
                    void SetReferPageUrl(const std::string& _referPageUrl);

                    /**
                     * 判断参数 ReferPageUrl 是否已赋值
                     * @return ReferPageUrl 是否已赋值
                     * 
                     */
                    bool ReferPageUrlHasBeenSet() const;

                    /**
                     * 获取<p>The ID of the user as guest</p>
                     * @return GuestId <p>The ID of the user as guest</p>
                     * 
                     */
                    std::string GetGuestId() const;

                    /**
                     * 设置<p>The ID of the user as guest</p>
                     * @param _guestId <p>The ID of the user as guest</p>
                     * 
                     */
                    void SetGuestId(const std::string& _guestId);

                    /**
                     * 判断参数 GuestId 是否已赋值
                     * @return GuestId 是否已赋值
                     * 
                     */
                    bool GuestIdHasBeenSet() const;

                    /**
                     * 获取<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @return Cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * @param _cust <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>Current page type such as home page, search page</p>
                     */
                    std::string m_pageType;
                    bool m_pageTypeHasBeenSet;

                    /**
                     * <p>Currently page URL</p>
                     */
                    std::string m_pageUrl;
                    bool m_pageUrlHasBeenSet;

                    /**
                     * <p>Browsing duration</p><p>Measurement unit: ms</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>The type of the content in current page such as ad, video, article</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>The ID of the content in current page</p>
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * <p>Previous page type such as home page, search page</p>
                     */
                    std::string m_referPageType;
                    bool m_referPageTypeHasBeenSet;

                    /**
                     * <p>Previous page URL</p>
                     */
                    std::string m_referPageUrl;
                    bool m_referPageUrlHasBeenSet;

                    /**
                     * <p>The ID of the user as guest</p>
                     */
                    std::string m_guestId;
                    bool m_guestIdHasBeenSet;

                    /**
                     * <p>The custom parameters agreed with RCE. An array of objects in K:V format. e.g.[{"Key": "ApproverName", "Value": "bob"},{"Key":"ApproverPhone","Value": "+86131****5678"}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_BROWSEEVENT_H_
