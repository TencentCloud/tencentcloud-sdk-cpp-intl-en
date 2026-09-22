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
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b></p>
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
                     * 获取<p>Subject name, cannot exceed 20 characters.</p>
                     * @return ElementName <p>Subject name, cannot exceed 20 characters.</p>
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置<p>Subject name, cannot exceed 20 characters.</p>
                     * @param _elementName <p>Subject name, cannot exceed 20 characters.</p>
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
                     * 获取<p>Subject description, up to 100 characters.</p>
                     * @return ElementDescription <p>Subject description, up to 100 characters.</p>
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置<p>Subject description, up to 100 characters.</p>
                     * @param _elementDescription <p>Subject description, up to 100 characters.</p>
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
                     * 获取<p>Subject reference method. The availability of subjects customized via video and via images differs.</p><p>Enumeration values:</p><ul><li>video_refer: Video character subject. At this point, refer to element_video_list to define the subject appearance.</li><li>image_refer: Multi-image subject. At this point, refer to element_image_list to define the subject appearance.</li></ul>
                     * @return ReferenceType <p>Subject reference method. The availability of subjects customized via video and via images differs.</p><p>Enumeration values:</p><ul><li>video_refer: Video character subject. At this point, refer to element_video_list to define the subject appearance.</li><li>image_refer: Multi-image subject. At this point, refer to element_image_list to define the subject appearance.</li></ul>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>Subject reference method. The availability of subjects customized via video and via images differs.</p><p>Enumeration values:</p><ul><li>video_refer: Video character subject. At this point, refer to element_video_list to define the subject appearance.</li><li>image_refer: Multi-image subject. At this point, refer to element_image_list to define the subject appearance.</li></ul>
                     * @param _referenceType <p>Subject reference method. The availability of subjects customized via video and via images differs.</p><p>Enumeration values:</p><ul><li>video_refer: Video character subject. At this point, refer to element_video_list to define the subject appearance.</li><li>image_refer: Multi-image subject. At this point, refer to element_image_list to define the subject appearance.</li></ul>
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
                     * 获取<p>Entity timbre, bindable to existing timbres in the timbre library.</p><ul><li>If the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only entities customized for video support binding timbres.</li></ul>
                     * @return ElementVoiceId <p>Entity timbre, bindable to existing timbres in the timbre library.</p><ul><li>If the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only entities customized for video support binding timbres.</li></ul>
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 设置<p>Entity timbre, bindable to existing timbres in the timbre library.</p><ul><li>If the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only entities customized for video support binding timbres.</li></ul>
                     * @param _elementVoiceId <p>Entity timbre, bindable to existing timbres in the timbre library.</p><ul><li>If the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only entities customized for video support binding timbres.</li></ul>
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
                     * 获取<p>Entity reference video, used to set the entity and its details via video.</p><ul><li>videos with audio can be uploaded. If the video contains voice, it triggers timbre customization (customize + add to timbre library + bind with entity).</li><li>The current parameter is required when referencing a video, and invalid when referencing an image.</li><li>Carried in key:value format, as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● video format supports only MP4/MOV<br>● Only 1080p videos with duration between 3s and 8s and an aspect ratio of 16:9 or 9:16 are supported<br>● Up to 1 video can be uploaded, with a video size no more than 200MB<br>● The video_url parameter value cannot be empty</li></ul>
                     * @return ElementVideoList <p>Entity reference video, used to set the entity and its details via video.</p><ul><li>videos with audio can be uploaded. If the video contains voice, it triggers timbre customization (customize + add to timbre library + bind with entity).</li><li>The current parameter is required when referencing a video, and invalid when referencing an image.</li><li>Carried in key:value format, as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● video format supports only MP4/MOV<br>● Only 1080p videos with duration between 3s and 8s and an aspect ratio of 16:9 or 9:16 are supported<br>● Up to 1 video can be uploaded, with a video size no more than 200MB<br>● The video_url parameter value cannot be empty</li></ul>
                     * 
                     */
                    std::string GetElementVideoList() const;

                    /**
                     * 设置<p>Entity reference video, used to set the entity and its details via video.</p><ul><li>videos with audio can be uploaded. If the video contains voice, it triggers timbre customization (customize + add to timbre library + bind with entity).</li><li>The current parameter is required when referencing a video, and invalid when referencing an image.</li><li>Carried in key:value format, as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● video format supports only MP4/MOV<br>● Only 1080p videos with duration between 3s and 8s and an aspect ratio of 16:9 or 9:16 are supported<br>● Up to 1 video can be uploaded, with a video size no more than 200MB<br>● The video_url parameter value cannot be empty</li></ul>
                     * @param _elementVideoList <p>Entity reference video, used to set the entity and its details via video.</p><ul><li>videos with audio can be uploaded. If the video contains voice, it triggers timbre customization (customize + add to timbre library + bind with entity).</li><li>The current parameter is required when referencing a video, and invalid when referencing an image.</li><li>Carried in key:value format, as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● video format supports only MP4/MOV<br>● Only 1080p videos with duration between 3s and 8s and an aspect ratio of 16:9 or 9:16 are supported<br>● Up to 1 video can be uploaded, with a video size no more than 200MB<br>● The video_url parameter value cannot be empty</li></ul>
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
                     * 获取<p>Subject reference image. You can set the subject and its details through multiple images.</p><ul><li>Including a front reference image and other angle or close-up reference images, where:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required. They must have differences from the front reference image and are defined by the image_url parameter.</li></ul></li><li>Carried in key:value format as follows:<br><pre><code>{  "frontal_image":"image_url_0",  "refer_images":[    {      "image_url":"image_url_1"    },    {      "image_url":"image_url_2"    },    {      "image_url":"image_url_3"    }  ]}</code></pre></li></ul>
                     * @return ElementImageList <p>Subject reference image. You can set the subject and its details through multiple images.</p><ul><li>Including a front reference image and other angle or close-up reference images, where:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required. They must have differences from the front reference image and are defined by the image_url parameter.</li></ul></li><li>Carried in key:value format as follows:<br><pre><code>{  "frontal_image":"image_url_0",  "refer_images":[    {      "image_url":"image_url_1"    },    {      "image_url":"image_url_2"    },    {      "image_url":"image_url_3"    }  ]}</code></pre></li></ul>
                     * 
                     */
                    std::string GetElementImageList() const;

                    /**
                     * 设置<p>Subject reference image. You can set the subject and its details through multiple images.</p><ul><li>Including a front reference image and other angle or close-up reference images, where:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required. They must have differences from the front reference image and are defined by the image_url parameter.</li></ul></li><li>Carried in key:value format as follows:<br><pre><code>{  "frontal_image":"image_url_0",  "refer_images":[    {      "image_url":"image_url_1"    },    {      "image_url":"image_url_2"    },    {      "image_url":"image_url_3"    }  ]}</code></pre></li></ul>
                     * @param _elementImageList <p>Subject reference image. You can set the subject and its details through multiple images.</p><ul><li>Including a front reference image and other angle or close-up reference images, where:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required. They must have differences from the front reference image and are defined by the image_url parameter.</li></ul></li><li>Carried in key:value format as follows:<br><pre><code>{  "frontal_image":"image_url_0",  "refer_images":[    {      "image_url":"image_url_1"    },    {      "image_url":"image_url_2"    },    {      "image_url":"image_url_3"    }  ]}</code></pre></li></ul>
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
                     * 获取<p>Configure tags for a principal. A principal can be configured with multiple tags.</p><ul><li>Use key:value to carry them. Details are given below:</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * @return TagList <p>Configure tags for a principal. A principal can be configured with multiple tags.</p><ul><li>Use key:value to carry them. Details are given below:</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * 
                     */
                    std::string GetTagList() const;

                    /**
                     * 设置<p>Configure tags for a principal. A principal can be configured with multiple tags.</p><ul><li>Use key:value to carry them. Details are given below:</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * @param _tagList <p>Configure tags for a principal. A principal can be configured with multiple tags.</p><ul><li>Use key:value to carry them. Details are given below:</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
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
                     * 获取<p>If the overseas custom subject library is enabled, you can pass in <code>True</code> to use it.</p><p>Enumeration values:</p><ul><li>True: Use the overseas custom subject library.</li><li>False: Do not use the overseas custom subject library.</li></ul>
                     * @return DisableModeration <p>If the overseas custom subject library is enabled, you can pass in <code>True</code> to use it.</p><p>Enumeration values:</p><ul><li>True: Use the overseas custom subject library.</li><li>False: Do not use the overseas custom subject library.</li></ul>
                     * 
                     */
                    std::string GetDisableModeration() const;

                    /**
                     * 设置<p>If the overseas custom subject library is enabled, you can pass in <code>True</code> to use it.</p><p>Enumeration values:</p><ul><li>True: Use the overseas custom subject library.</li><li>False: Do not use the overseas custom subject library.</li></ul>
                     * @param _disableModeration <p>If the overseas custom subject library is enabled, you can pass in <code>True</code> to use it.</p><p>Enumeration values:</p><ul><li>True: Use the overseas custom subject library.</li><li>False: Do not use the overseas custom subject library.</li></ul>
                     * 
                     */
                    void SetDisableModeration(const std::string& _disableModeration);

                    /**
                     * 判断参数 DisableModeration 是否已赋值
                     * @return DisableModeration 是否已赋值
                     * 
                     */
                    bool DisableModerationHasBeenSet() const;

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
                     * 获取<p>Source context. This is used to pass user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
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
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether in the default application or a newly created application.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Subject name, cannot exceed 20 characters.</p>
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * <p>Subject description, up to 100 characters.</p>
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * <p>Subject reference method. The availability of subjects customized via video and via images differs.</p><p>Enumeration values:</p><ul><li>video_refer: Video character subject. At this point, refer to element_video_list to define the subject appearance.</li><li>image_refer: Multi-image subject. At this point, refer to element_image_list to define the subject appearance.</li></ul>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>Entity timbre, bindable to existing timbres in the timbre library.</p><ul><li>If the current parameter is empty, the current entity is not bound to a timbre.</li><li>Only entities customized for video support binding timbres.</li></ul>
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                    /**
                     * <p>Entity reference video, used to set the entity and its details via video.</p><ul><li>videos with audio can be uploaded. If the video contains voice, it triggers timbre customization (customize + add to timbre library + bind with entity).</li><li>The current parameter is required when referencing a video, and invalid when referencing an image.</li><li>Carried in key:value format, as follows:<br><pre><code>{  "refer_videos":[    {      "video_url":"video_url_1"    }  ]}</code></pre>● video format supports only MP4/MOV<br>● Only 1080p videos with duration between 3s and 8s and an aspect ratio of 16:9 or 9:16 are supported<br>● Up to 1 video can be uploaded, with a video size no more than 200MB<br>● The video_url parameter value cannot be empty</li></ul>
                     */
                    std::string m_elementVideoList;
                    bool m_elementVideoListHasBeenSet;

                    /**
                     * <p>Subject reference image. You can set the subject and its details through multiple images.</p><ul><li>Including a front reference image and other angle or close-up reference images, where:<ul><li>At least 1 front reference image is required, defined by the frontal_image parameter.</li><li>1–3 other reference images are required. They must have differences from the front reference image and are defined by the image_url parameter.</li></ul></li><li>Carried in key:value format as follows:<br><pre><code>{  "frontal_image":"image_url_0",  "refer_images":[    {      "image_url":"image_url_1"    },    {      "image_url":"image_url_2"    },    {      "image_url":"image_url_3"    }  ]}</code></pre></li></ul>
                     */
                    std::string m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * <p>Configure tags for a principal. A principal can be configured with multiple tags.</p><ul><li>Use key:value to carry them. Details are given below:</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     */
                    std::string m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>If the overseas custom subject library is enabled, you can pass in <code>True</code> to use it.</p><p>Enumeration values:</p><ul><li>True: Use the overseas custom subject library.</li><li>False: Do not use the overseas custom subject library.</li></ul>
                     */
                    std::string m_disableModeration;
                    bool m_disableModerationHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
