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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetMsgRecord request structure.
                */
                class GetMsgRecordRequest : public AbstractModel
                {
                public:
                    GetMsgRecordRequest();
                    ~GetMsgRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type.
                     * @return Type Type.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type.
                     * @param _type Type.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Quantity.
                     * @return Count Quantity.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Quantity.
                     * @param _count Quantity.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Session ID.
                     * @return SessionId Session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionId Session ID.
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
                     * 获取Application AppKey. When Type=5 [API Visitor], this field is required. </br> How to obtain it: </br> 1. After the application is released, obtain it at [Application Page]-[Release Management]-[Call Information]-[API Management]. </br> 2. Refer to item 2 in https://cloud.tencent.com/document/product/1759/109469.
                     * @return BotAppKey Application AppKey. When Type=5 [API Visitor], this field is required. </br> How to obtain it: </br> 1. After the application is released, obtain it at [Application Page]-[Release Management]-[Call Information]-[API Management]. </br> 2. Refer to item 2 in https://cloud.tencent.com/document/product/1759/109469.
                     * 
                     */
                    std::string GetBotAppKey() const;

                    /**
                     * 设置Application AppKey. When Type=5 [API Visitor], this field is required. </br> How to obtain it: </br> 1. After the application is released, obtain it at [Application Page]-[Release Management]-[Call Information]-[API Management]. </br> 2. Refer to item 2 in https://cloud.tencent.com/document/product/1759/109469.
                     * @param _botAppKey Application AppKey. When Type=5 [API Visitor], this field is required. </br> How to obtain it: </br> 1. After the application is released, obtain it at [Application Page]-[Release Management]-[Call Information]-[API Management]. </br> 2. Refer to item 2 in https://cloud.tencent.com/document/product/1759/109469.
                     * 
                     */
                    void SetBotAppKey(const std::string& _botAppKey);

                    /**
                     * 判断参数 BotAppKey 是否已赋值
                     * @return BotAppKey 是否已赋值
                     * 
                     */
                    bool BotAppKeyHasBeenSet() const;

                    /**
                     * 获取Scenario, experience: 1; formal: 2.
                     * @return Scene Scenario, experience: 1; formal: 2.
                     * 
                     */
                    uint64_t GetScene() const;

                    /**
                     * 设置Scenario, experience: 1; formal: 2.
                     * @param _scene Scenario, experience: 1; formal: 2.
                     * 
                     */
                    void SetScene(const uint64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取Last record ID. Retrieve messages in reverse order. You can only select either MidRecordId or LastRecordId.
                     * @return LastRecordId Last record ID. Retrieve messages in reverse order. You can only select either MidRecordId or LastRecordId.
                     * 
                     */
                    std::string GetLastRecordId() const;

                    /**
                     * 设置Last record ID. Retrieve messages in reverse order. You can only select either MidRecordId or LastRecordId.
                     * @param _lastRecordId Last record ID. Retrieve messages in reverse order. You can only select either MidRecordId or LastRecordId.
                     * 
                     */
                    void SetLastRecordId(const std::string& _lastRecordId);

                    /**
                     * 判断参数 LastRecordId 是否已赋值
                     * @return LastRecordId 是否已赋值
                     * 
                     */
                    bool LastRecordIdHasBeenSet() const;

                    /**
                     * 获取If this value is input, it means pulling a total of count message records before and after the record ID. You can only select either MidRecordId or LastRecordId.
                     * @return MidRecordId If this value is input, it means pulling a total of count message records before and after the record ID. You can only select either MidRecordId or LastRecordId.
                     * 
                     */
                    std::string GetMidRecordId() const;

                    /**
                     * 设置If this value is input, it means pulling a total of count message records before and after the record ID. You can only select either MidRecordId or LastRecordId.
                     * @param _midRecordId If this value is input, it means pulling a total of count message records before and after the record ID. You can only select either MidRecordId or LastRecordId.
                     * 
                     */
                    void SetMidRecordId(const std::string& _midRecordId);

                    /**
                     * 判断参数 MidRecordId 是否已赋值
                     * @return MidRecordId 是否已赋值
                     * 
                     */
                    bool MidRecordIdHasBeenSet() const;

                private:

                    /**
                     * Type.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Quantity.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Application AppKey. When Type=5 [API Visitor], this field is required. </br> How to obtain it: </br> 1. After the application is released, obtain it at [Application Page]-[Release Management]-[Call Information]-[API Management]. </br> 2. Refer to item 2 in https://cloud.tencent.com/document/product/1759/109469.
                     */
                    std::string m_botAppKey;
                    bool m_botAppKeyHasBeenSet;

                    /**
                     * Scenario, experience: 1; formal: 2.
                     */
                    uint64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * Last record ID. Retrieve messages in reverse order. You can only select either MidRecordId or LastRecordId.
                     */
                    std::string m_lastRecordId;
                    bool m_lastRecordIdHasBeenSet;

                    /**
                     * If this value is input, it means pulling a total of count message records before and after the record ID. You can only select either MidRecordId or LastRecordId.
                     */
                    std::string m_midRecordId;
                    bool m_midRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDREQUEST_H_
