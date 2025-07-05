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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOC_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Basic information of API document
                */
                class APIDoc : public AbstractModel
                {
                public:
                    APIDoc();
                    ~APIDoc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API document ID
                     * @return ApiDocId API document ID
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API document ID
                     * @param _apiDocId API document ID
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                    /**
                     * 获取API document name
                     * @return ApiDocName API document name
                     * 
                     */
                    std::string GetApiDocName() const;

                    /**
                     * 设置API document name
                     * @param _apiDocName API document name
                     * 
                     */
                    void SetApiDocName(const std::string& _apiDocName);

                    /**
                     * 判断参数 ApiDocName 是否已赋值
                     * @return ApiDocName 是否已赋值
                     * 
                     */
                    bool ApiDocNameHasBeenSet() const;

                    /**
                     * 获取API document build status
                     * @return ApiDocStatus API document build status
                     * 
                     */
                    std::string GetApiDocStatus() const;

                    /**
                     * 设置API document build status
                     * @param _apiDocStatus API document build status
                     * 
                     */
                    void SetApiDocStatus(const std::string& _apiDocStatus);

                    /**
                     * 判断参数 ApiDocStatus 是否已赋值
                     * @return ApiDocStatus 是否已赋值
                     * 
                     */
                    bool ApiDocStatusHasBeenSet() const;

                private:

                    /**
                     * API document ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                    /**
                     * API document name
                     */
                    std::string m_apiDocName;
                    bool m_apiDocNameHasBeenSet;

                    /**
                     * API document build status
                     */
                    std::string m_apiDocStatus;
                    bool m_apiDocStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOC_H_
