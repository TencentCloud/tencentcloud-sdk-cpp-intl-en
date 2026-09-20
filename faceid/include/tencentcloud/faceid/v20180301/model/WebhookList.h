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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_WEBHOOKLIST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_WEBHOOKLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Webhook configuration list
                */
                class WebhookList : public AbstractModel
                {
                public:
                    WebhookList();
                    ~WebhookList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Callback unique ID</p>
                     * @return WebhookId <p>Callback unique ID</p>
                     * 
                     */
                    int64_t GetWebhookId() const;

                    /**
                     * 设置<p>Callback unique ID</p>
                     * @param _webhookId <p>Callback unique ID</p>
                     * 
                     */
                    void SetWebhookId(const int64_t& _webhookId);

                    /**
                     * 判断参数 WebhookId 是否已赋值
                     * @return WebhookId 是否已赋值
                     * 
                     */
                    bool WebhookIdHasBeenSet() const;

                    /**
                     * 获取<p>Callback URL name</p>
                     * @return WebhookName <p>Callback URL name</p>
                     * 
                     */
                    std::string GetWebhookName() const;

                    /**
                     * 设置<p>Callback URL name</p>
                     * @param _webhookName <p>Callback URL name</p>
                     * 
                     */
                    void SetWebhookName(const std::string& _webhookName);

                    /**
                     * 判断参数 WebhookName 是否已赋值
                     * @return WebhookName 是否已赋值
                     * 
                     */
                    bool WebhookNameHasBeenSet() const;

                    /**
                     * 获取<p>Callback enumeration scenario.</p>
                     * @return Scene <p>Callback enumeration scenario.</p>
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置<p>Callback enumeration scenario.</p>
                     * @param _scene <p>Callback enumeration scenario.</p>
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>Callback URL, must use HTTPS</p>
                     * @return WebhookURL <p>Callback URL, must use HTTPS</p>
                     * 
                     */
                    std::string GetWebhookURL() const;

                    /**
                     * 设置<p>Callback URL, must use HTTPS</p>
                     * @param _webhookURL <p>Callback URL, must use HTTPS</p>
                     * 
                     */
                    void SetWebhookURL(const std::string& _webhookURL);

                    /**
                     * 判断参数 WebhookURL 是否已赋值
                     * @return WebhookURL 是否已赋值
                     * 
                     */
                    bool WebhookURLHasBeenSet() const;

                    /**
                     * 获取<p>Addition Time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * @return AddTime <p>Addition Time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>Addition Time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * @param _addTime <p>Addition Time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * @return ModTime <p>Update time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置<p>Update time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * @param _modTime <p>Update time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取<p>Callback request key</p>
                     * @return SignatureKey <p>Callback request key</p>
                     * 
                     */
                    std::string GetSignatureKey() const;

                    /**
                     * 设置<p>Callback request key</p>
                     * @param _signatureKey <p>Callback request key</p>
                     * 
                     */
                    void SetSignatureKey(const std::string& _signatureKey);

                    /**
                     * 判断参数 SignatureKey 是否已赋值
                     * @return SignatureKey 是否已赋值
                     * 
                     */
                    bool SignatureKeyHasBeenSet() const;

                    /**
                     * 获取<p>Existence of callback API key</p>
                     * @return HasSignatureKey <p>Existence of callback API key</p>
                     * 
                     */
                    bool GetHasSignatureKey() const;

                    /**
                     * 设置<p>Existence of callback API key</p>
                     * @param _hasSignatureKey <p>Existence of callback API key</p>
                     * 
                     */
                    void SetHasSignatureKey(const bool& _hasSignatureKey);

                    /**
                     * 判断参数 HasSignatureKey 是否已赋值
                     * @return HasSignatureKey 是否已赋值
                     * 
                     */
                    bool HasSignatureKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Callback unique ID</p>
                     */
                    int64_t m_webhookId;
                    bool m_webhookIdHasBeenSet;

                    /**
                     * <p>Callback URL name</p>
                     */
                    std::string m_webhookName;
                    bool m_webhookNameHasBeenSet;

                    /**
                     * <p>Callback enumeration scenario.</p>
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>Callback URL, must use HTTPS</p>
                     */
                    std::string m_webhookURL;
                    bool m_webhookURLHasBeenSet;

                    /**
                     * <p>Addition Time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>Update time</p><p>Parameter format: Format example: 2026-09-09 14:33:41</p>
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * <p>Callback request key</p>
                     */
                    std::string m_signatureKey;
                    bool m_signatureKeyHasBeenSet;

                    /**
                     * <p>Existence of callback API key</p>
                     */
                    bool m_hasSignatureKey;
                    bool m_hasSignatureKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_WEBHOOKLIST_H_
