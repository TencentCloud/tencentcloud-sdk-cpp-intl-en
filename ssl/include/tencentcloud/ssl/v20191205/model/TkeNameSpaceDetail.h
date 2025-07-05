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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TKENAMESPACEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TKENAMESPACEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TkeSecretDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of a TKE namespace
                */
                class TkeNameSpaceDetail : public AbstractModel
                {
                public:
                    TkeNameSpaceDetail();
                    ~TkeNameSpaceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The namespace name.
                     * @return Name The namespace name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The namespace name.
                     * @param _name The namespace name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The secret list.
                     * @return SecretList The secret list.
                     * 
                     */
                    std::vector<TkeSecretDetail> GetSecretList() const;

                    /**
                     * 设置The secret list.
                     * @param _secretList The secret list.
                     * 
                     */
                    void SetSecretList(const std::vector<TkeSecretDetail>& _secretList);

                    /**
                     * 判断参数 SecretList 是否已赋值
                     * @return SecretList 是否已赋值
                     * 
                     */
                    bool SecretListHasBeenSet() const;

                private:

                    /**
                     * The namespace name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The secret list.
                     */
                    std::vector<TkeSecretDetail> m_secretList;
                    bool m_secretListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TKENAMESPACEDETAIL_H_
