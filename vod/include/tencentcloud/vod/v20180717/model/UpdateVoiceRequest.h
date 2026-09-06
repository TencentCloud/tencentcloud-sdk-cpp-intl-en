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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEVOICEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VoiceUpdateFields.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * UpdateVoice request structure.
                */
                class UpdateVoiceRequest : public AbstractModel
                {
                public:
                    UpdateVoiceRequest();
                    ~UpdateVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Voice ID.</p>
                     * @return VoiceId <p>Voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID.</p>
                     * @param _voiceId <p>Voice ID.</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Fields of the updated voice.</p>
                     * @return VoiceFields <p>Fields of the updated voice.</p>
                     * 
                     */
                    VoiceUpdateFields GetVoiceFields() const;

                    /**
                     * 设置<p>Fields of the updated voice.</p>
                     * @param _voiceFields <p>Fields of the updated voice.</p>
                     * 
                     */
                    void SetVoiceFields(const VoiceUpdateFields& _voiceFields);

                    /**
                     * 判断参数 VoiceFields 是否已赋值
                     * @return VoiceFields 是否已赋值
                     * 
                     */
                    bool VoiceFieldsHasBeenSet() const;

                    /**
                     * 获取<p>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field as the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * @return SubAppId <p>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field as the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<p>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field as the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * @param _subAppId <p>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field as the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>Voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Fields of the updated voice.</p>
                     */
                    VoiceUpdateFields m_voiceFields;
                    bool m_voiceFieldsHasBeenSet;

                    /**
                     * <p>VOD application ID. From December 25, 2023, customers who activate on-demand services must fill in this field as the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEVOICEREQUEST_H_
