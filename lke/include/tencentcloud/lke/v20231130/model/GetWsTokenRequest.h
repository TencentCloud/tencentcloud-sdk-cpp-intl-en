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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/GetWsTokenReq_Label.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetWsToken request structure.
                */
                class GetWsTokenRequest : public AbstractModel
                {
                public:
                    GetWsTokenRequest();
                    ~GetWsTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Access type, 5 - API visitor .
                     * @return Type Access type, 5 - API visitor .
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Access type, 5 - API visitor .
                     * @param _type Access type, 5 - API visitor .
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Application AppKey</br>
How to Obtain It:</br>
1. After the application is released, obtain it at [Release Management] - [Call Information] - [API Management] on the application page.</br>
2. See the second item in https://cloud.tencent.com/document/product/1759/109469.
                     * @return BotAppKey Application AppKey</br>
How to Obtain It:</br>
1. After the application is released, obtain it at [Release Management] - [Call Information] - [API Management] on the application page.</br>
2. See the second item in https://cloud.tencent.com/document/product/1759/109469.
                     * 
                     */
                    std::string GetBotAppKey() const;

                    /**
                     * 设置Application AppKey</br>
How to Obtain It:</br>
1. After the application is released, obtain it at [Release Management] - [Call Information] - [API Management] on the application page.</br>
2. See the second item in https://cloud.tencent.com/document/product/1759/109469.
                     * @param _botAppKey Application AppKey</br>
How to Obtain It:</br>
1. After the application is released, obtain it at [Release Management] - [Call Information] - [API Management] on the application page.</br>
2. See the second item in https://cloud.tencent.com/document/product/1759/109469.
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
                     * 获取Visitor ID (external input, recommended to be unique, identifies the user currently accessing the session). Length Limit: string(64).
                     * @return VisitorBizId Visitor ID (external input, recommended to be unique, identifies the user currently accessing the session). Length Limit: string(64).
                     * 
                     */
                    std::string GetVisitorBizId() const;

                    /**
                     * 设置Visitor ID (external input, recommended to be unique, identifies the user currently accessing the session). Length Limit: string(64).
                     * @param _visitorBizId Visitor ID (external input, recommended to be unique, identifies the user currently accessing the session). Length Limit: string(64).
                     * 
                     */
                    void SetVisitorBizId(const std::string& _visitorBizId);

                    /**
                     * 判断参数 VisitorBizId 是否已赋值
                     * @return VisitorBizId 是否已赋值
                     * 
                     */
                    bool VisitorBizIdHasBeenSet() const;

                    /**
                     * 获取Knowledge label, used for search filter in the knowledge base. This field is about to be deactivated. Please use the custom_variables field in the dialogue endpoint API to replace this field.
                     * @return VisitorLabels Knowledge label, used for search filter in the knowledge base. This field is about to be deactivated. Please use the custom_variables field in the dialogue endpoint API to replace this field.
                     * 
                     */
                    std::vector<GetWsTokenReq_Label> GetVisitorLabels() const;

                    /**
                     * 设置Knowledge label, used for search filter in the knowledge base. This field is about to be deactivated. Please use the custom_variables field in the dialogue endpoint API to replace this field.
                     * @param _visitorLabels Knowledge label, used for search filter in the knowledge base. This field is about to be deactivated. Please use the custom_variables field in the dialogue endpoint API to replace this field.
                     * 
                     */
                    void SetVisitorLabels(const std::vector<GetWsTokenReq_Label>& _visitorLabels);

                    /**
                     * 判断参数 VisitorLabels 是否已赋值
                     * @return VisitorLabels 是否已赋值
                     * 
                     */
                    bool VisitorLabelsHasBeenSet() const;

                private:

                    /**
                     * Access type, 5 - API visitor .
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Application AppKey</br>
How to Obtain It:</br>
1. After the application is released, obtain it at [Release Management] - [Call Information] - [API Management] on the application page.</br>
2. See the second item in https://cloud.tencent.com/document/product/1759/109469.
                     */
                    std::string m_botAppKey;
                    bool m_botAppKeyHasBeenSet;

                    /**
                     * Visitor ID (external input, recommended to be unique, identifies the user currently accessing the session). Length Limit: string(64).
                     */
                    std::string m_visitorBizId;
                    bool m_visitorBizIdHasBeenSet;

                    /**
                     * Knowledge label, used for search filter in the knowledge base. This field is about to be deactivated. Please use the custom_variables field in the dialogue endpoint API to replace this field.
                     */
                    std::vector<GetWsTokenReq_Label> m_visitorLabels;
                    bool m_visitorLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENREQUEST_H_
