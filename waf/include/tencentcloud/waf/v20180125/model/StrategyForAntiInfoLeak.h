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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGYFORANTIINFOLEAK_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGYFORANTIINFOLEAK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Matching criteria structure for preventing information leakage
                */
                class StrategyForAntiInfoLeak : public AbstractModel
                {
                public:
                    StrategyForAntiInfoLeak();
                    ~StrategyForAntiInfoLeak() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Matching Criteria, returncode (Response Code), keywords (Keywords), information (Sensitive Information)
                     * @return Field Matching Criteria, returncode (Response Code), keywords (Keywords), information (Sensitive Information)
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置Matching Criteria, returncode (Response Code), keywords (Keywords), information (Sensitive Information)
                     * @param _field Matching Criteria, returncode (Response Code), keywords (Keywords), information (Sensitive Information)
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取Logical operator, fixed value: contains
                     * @return CompareFunc Logical operator, fixed value: contains
                     * 
                     */
                    std::string GetCompareFunc() const;

                    /**
                     * 设置Logical operator, fixed value: contains
                     * @param _compareFunc Logical operator, fixed value: contains
                     * 
                     */
                    void SetCompareFunc(const std::string& _compareFunc);

                    /**
                     * 判断参数 CompareFunc 是否已赋值
                     * @return CompareFunc 是否已赋值
                     * 
                     */
                    bool CompareFuncHasBeenSet() const;

                    /**
                     * 获取Matching content
The following options are available when Field is set to information:
idcard (ID card), phone (phone number), and bankcard (bank card).
The following options are available when Field is set to returncode:
400 (status code 400), 403 (status code 403), 404 (status code 404), 4xx (other 4xx status codes), 500 (status code 500), 501 (status code 501), 502 (status code 502), 504 (status code 504), and 5xx (other 5xx status codes).
When Field is set to keywords, users need to input the matching content themselves.

                     * @return Content Matching content
The following options are available when Field is set to information:
idcard (ID card), phone (phone number), and bankcard (bank card).
The following options are available when Field is set to returncode:
400 (status code 400), 403 (status code 403), 404 (status code 404), 4xx (other 4xx status codes), 500 (status code 500), 501 (status code 501), 502 (status code 502), 504 (status code 504), and 5xx (other 5xx status codes).
When Field is set to keywords, users need to input the matching content themselves.

                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Matching content
The following options are available when Field is set to information:
idcard (ID card), phone (phone number), and bankcard (bank card).
The following options are available when Field is set to returncode:
400 (status code 400), 403 (status code 403), 404 (status code 404), 4xx (other 4xx status codes), 500 (status code 500), 501 (status code 501), 502 (status code 502), 504 (status code 504), and 5xx (other 5xx status codes).
When Field is set to keywords, users need to input the matching content themselves.

                     * @param _content Matching content
The following options are available when Field is set to information:
idcard (ID card), phone (phone number), and bankcard (bank card).
The following options are available when Field is set to returncode:
400 (status code 400), 403 (status code 403), 404 (status code 404), 4xx (other 4xx status codes), 500 (status code 500), 501 (status code 501), 502 (status code 502), 504 (status code 504), and 5xx (other 5xx status codes).
When Field is set to keywords, users need to input the matching content themselves.

                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Matching Criteria, returncode (Response Code), keywords (Keywords), information (Sensitive Information)
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * Logical operator, fixed value: contains
                     */
                    std::string m_compareFunc;
                    bool m_compareFuncHasBeenSet;

                    /**
                     * Matching content
The following options are available when Field is set to information:
idcard (ID card), phone (phone number), and bankcard (bank card).
The following options are available when Field is set to returncode:
400 (status code 400), 403 (status code 403), 404 (status code 404), 4xx (other 4xx status codes), 500 (status code 500), 501 (status code 501), 502 (status code 502), 504 (status code 504), and 5xx (other 5xx status codes).
When Field is set to keywords, users need to input the matching content themselves.

                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGYFORANTIINFOLEAK_H_
