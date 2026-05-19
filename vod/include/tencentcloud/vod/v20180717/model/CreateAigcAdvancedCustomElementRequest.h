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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_

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
                * CreateAigcAdvancedCustomElement request structure.
                */
                class CreateAigcAdvancedCustomElementRequest : public AbstractModel
                {
                public:
                    CreateAigcAdvancedCustomElementRequest();
                    ~CreateAigcAdvancedCustomElementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).</b></p>
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
                     * 获取<p>Subject name cannot exceed 20 characters.</p>
                     * @return ElementName <p>Subject name cannot exceed 20 characters.</p>
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置<p>Subject name cannot exceed 20 characters.</p>
                     * @param _elementName <p>Subject name cannot exceed 20 characters.</p>
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取<p>Subject description, with a length limit of 100 characters.</p>
                     * @return ElementDescription <p>Subject description, with a length limit of 100 characters.</p>
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置<p>Subject description, with a length limit of 100 characters.</p>
                     * @param _elementDescription <p>Subject description, with a length limit of 100 characters.</p>
                     * 
                     */
                    void SetElementDescription(const std::string& _elementDescription);

                    /**
                     * 判断参数 ElementDescription 是否已赋值
                     * @return ElementDescription 是否已赋值
                     * 
                     */
                    bool ElementDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Reference method for the subject. The availability area differs between subjects customized via video and those customized via images.</p><p>Enumeration value:</p><ul><li>video_refer: Video character subject. At this point, the subject appearance is defined by referring to element_video_list.</li><li>image_refer: Multi-image subject. At this point, the subject appearance is defined by referring to element_image_list.</li></ul>
                     * @return ReferenceType <p>Reference method for the subject. The availability area differs between subjects customized via video and those customized via images.</p><p>Enumeration value:</p><ul><li>video_refer: Video character subject. At this point, the subject appearance is defined by referring to element_video_list.</li><li>image_refer: Multi-image subject. At this point, the subject appearance is defined by referring to element_image_list.</li></ul>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>Reference method for the subject. The availability area differs between subjects customized via video and those customized via images.</p><p>Enumeration value:</p><ul><li>video_refer: Video character subject. At this point, the subject appearance is defined by referring to element_video_list.</li><li>image_refer: Multi-image subject. At this point, the subject appearance is defined by referring to element_image_list.</li></ul>
                     * @param _referenceType <p>Reference method for the subject. The availability area differs between subjects customized via video and those customized via images.</p><p>Enumeration value:</p><ul><li>video_refer: Video character subject. At this point, the subject appearance is defined by referring to element_video_list.</li><li>image_refer: Multi-image subject. At this point, the subject appearance is defined by referring to element_image_list.</li></ul>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Voice type of the current entity. You can bind an existing timbre from the timbre library.</p><ul><li>When the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only customized video entities support binding a timbre.</li></ul>
                     * @return ElementVoiceId <p>Voice type of the current entity. You can bind an existing timbre from the timbre library.</p><ul><li>When the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only customized video entities support binding a timbre.</li></ul>
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 设置<p>Voice type of the current entity. You can bind an existing timbre from the timbre library.</p><ul><li>When the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only customized video entities support binding a timbre.</li></ul>
                     * @param _elementVoiceId <p>Voice type of the current entity. You can bind an existing timbre from the timbre library.</p><ul><li>When the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only customized video entities support binding a timbre.</li></ul>
                     * 
                     */
                    void SetElementVoiceId(const std::string& _elementVoiceId);

                    /**
                     * 判断参数 ElementVoiceId 是否已赋值
                     * @return ElementVoiceId 是否已赋值
                     * 
                     */
                    bool ElementVoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Reference video for the entity. You can set the entity and its details through the video.</p><ul><li>You can upload a video with sound. If the video contains voice, it will trigger timbre customization (customization + adding to the timbre library + binding to the entity).</li><li>The current parameter is required when referencing a video and is invalid when referencing an image.</li><li>Use key:value pairs as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● Only MP4/MOV video formats are supported.<br>● Only 1080p videos with a duration between 3s–8s and an aspect ratio of 16:9 or 9:16 are supported.<br>● Up to 1 video can be uploaded, with a video size of no more than 200MB.<br>● The video_url parameter value cannot be empty.</li></ul>
                     * @return ElementVideoList <p>Reference video for the entity. You can set the entity and its details through the video.</p><ul><li>You can upload a video with sound. If the video contains voice, it will trigger timbre customization (customization + adding to the timbre library + binding to the entity).</li><li>The current parameter is required when referencing a video and is invalid when referencing an image.</li><li>Use key:value pairs as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● Only MP4/MOV video formats are supported.<br>● Only 1080p videos with a duration between 3s–8s and an aspect ratio of 16:9 or 9:16 are supported.<br>● Up to 1 video can be uploaded, with a video size of no more than 200MB.<br>● The video_url parameter value cannot be empty.</li></ul>
                     * 
                     */
                    std::string GetElementVideoList() const;

                    /**
                     * 设置<p>Reference video for the entity. You can set the entity and its details through the video.</p><ul><li>You can upload a video with sound. If the video contains voice, it will trigger timbre customization (customization + adding to the timbre library + binding to the entity).</li><li>The current parameter is required when referencing a video and is invalid when referencing an image.</li><li>Use key:value pairs as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● Only MP4/MOV video formats are supported.<br>● Only 1080p videos with a duration between 3s–8s and an aspect ratio of 16:9 or 9:16 are supported.<br>● Up to 1 video can be uploaded, with a video size of no more than 200MB.<br>● The video_url parameter value cannot be empty.</li></ul>
                     * @param _elementVideoList <p>Reference video for the entity. You can set the entity and its details through the video.</p><ul><li>You can upload a video with sound. If the video contains voice, it will trigger timbre customization (customization + adding to the timbre library + binding to the entity).</li><li>The current parameter is required when referencing a video and is invalid when referencing an image.</li><li>Use key:value pairs as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● Only MP4/MOV video formats are supported.<br>● Only 1080p videos with a duration between 3s–8s and an aspect ratio of 16:9 or 9:16 are supported.<br>● Up to 1 video can be uploaded, with a video size of no more than 200MB.<br>● The video_url parameter value cannot be empty.</li></ul>
                     * 
                     */
                    void SetElementVideoList(const std::string& _elementVideoList);

                    /**
                     * 判断参数 ElementVideoList 是否已赋值
                     * @return ElementVideoList 是否已赋值
                     * 
                     */
                    bool ElementVideoListHasBeenSet() const;

                    /**
                     * 获取<p>Reference images of the subject can be set with multiple images and its details.</p><ul><li>Including front reference images and other perspectives or close-up reference images. Among them:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required, with differences from the front reference image, defined by the image_url parameter.</li></ul></li><li>Use key:value to carry, as follows:<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * @return ElementImageList <p>Reference images of the subject can be set with multiple images and its details.</p><ul><li>Including front reference images and other perspectives or close-up reference images. Among them:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required, with differences from the front reference image, defined by the image_url parameter.</li></ul></li><li>Use key:value to carry, as follows:<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * 
                     */
                    std::string GetElementImageList() const;

                    /**
                     * 设置<p>Reference images of the subject can be set with multiple images and its details.</p><ul><li>Including front reference images and other perspectives or close-up reference images. Among them:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required, with differences from the front reference image, defined by the image_url parameter.</li></ul></li><li>Use key:value to carry, as follows:<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * @param _elementImageList <p>Reference images of the subject can be set with multiple images and its details.</p><ul><li>Including front reference images and other perspectives or close-up reference images. Among them:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required, with differences from the front reference image, defined by the image_url parameter.</li></ul></li><li>Use key:value to carry, as follows:<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * 
                     */
                    void SetElementImageList(const std::string& _elementImageList);

                    /**
                     * 判断参数 ElementImageList 是否已赋值
                     * @return ElementImageList 是否已赋值
                     * 
                     */
                    bool ElementImageListHasBeenSet() const;

                    /**
                     * 获取<p>Configure tags for a subject. A subject can be configured with multiple tags.</p><ul><li>Use key:value pairs to carry them. Details are given below:</li></ul><p><pre><code>[  {        "tag_id": "o_101"  }, {        "tag_id": "o_102"    }]</code></pre></p>
                     * @return TagList <p>Configure tags for a subject. A subject can be configured with multiple tags.</p><ul><li>Use key:value pairs to carry them. Details are given below:</li></ul><p><pre><code>[  {        "tag_id": "o_101"  }, {        "tag_id": "o_102"    }]</code></pre></p>
                     * 
                     */
                    std::string GetTagList() const;

                    /**
                     * 设置<p>Configure tags for a subject. A subject can be configured with multiple tags.</p><ul><li>Use key:value pairs to carry them. Details are given below:</li></ul><p><pre><code>[  {        "tag_id": "o_101"  }, {        "tag_id": "o_102"    }]</code></pre></p>
                     * @param _tagList <p>Configure tags for a subject. A subject can be configured with multiple tags.</p><ul><li>Use key:value pairs to carry them. Details are given below:</li></ul><p><pre><code>[  {        "tag_id": "o_101"  }, {        "tag_id": "o_102"    }]</code></pre></p>
                     * 
                     */
                    void SetTagList(const std::string& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Subject name cannot exceed 20 characters.</p>
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * <p>Subject description, with a length limit of 100 characters.</p>
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * <p>Reference method for the subject. The availability area differs between subjects customized via video and those customized via images.</p><p>Enumeration value:</p><ul><li>video_refer: Video character subject. At this point, the subject appearance is defined by referring to element_video_list.</li><li>image_refer: Multi-image subject. At this point, the subject appearance is defined by referring to element_image_list.</li></ul>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>Voice type of the current entity. You can bind an existing timbre from the timbre library.</p><ul><li>When the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only customized video entities support binding a timbre.</li></ul>
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                    /**
                     * <p>Reference video for the entity. You can set the entity and its details through the video.</p><ul><li>You can upload a video with sound. If the video contains voice, it will trigger timbre customization (customization + adding to the timbre library + binding to the entity).</li><li>The current parameter is required when referencing a video and is invalid when referencing an image.</li><li>Use key:value pairs as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● Only MP4/MOV video formats are supported.<br>● Only 1080p videos with a duration between 3s–8s and an aspect ratio of 16:9 or 9:16 are supported.<br>● Up to 1 video can be uploaded, with a video size of no more than 200MB.<br>● The video_url parameter value cannot be empty.</li></ul>
                     */
                    std::string m_elementVideoList;
                    bool m_elementVideoListHasBeenSet;

                    /**
                     * <p>Reference images of the subject can be set with multiple images and its details.</p><ul><li>Including front reference images and other perspectives or close-up reference images. Among them:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required, with differences from the front reference image, defined by the image_url parameter.</li></ul></li><li>Use key:value to carry, as follows:<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     */
                    std::string m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * <p>Configure tags for a subject. A subject can be configured with multiple tags.</p><ul><li>Use key:value pairs to carry them. Details are given below:</li></ul><p><pre><code>[  {        "tag_id": "o_101"  }, {        "tag_id": "o_102"    }]</code></pre></p>
                     */
                    std::string m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, it represents 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
