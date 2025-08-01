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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISKSUGGESTION_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISKSUGGESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Risk details
                */
                class ServerRiskSuggestion : public AbstractModel
                {
                public:
                    ServerRiskSuggestion();
                    ~ServerRiskSuggestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk title
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Title Risk title
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Risk title
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _title Risk title
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Risk details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Body Risk details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Risk details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _body Risk details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                private:

                    /**
                     * Risk title
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Risk details
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SERVERRISKSUGGESTION_H_
