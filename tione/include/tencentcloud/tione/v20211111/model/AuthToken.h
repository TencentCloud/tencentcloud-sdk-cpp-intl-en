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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKEN_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/AuthTokenBase.h>
#include <tencentcloud/tione/v20211111/model/AuthTokenLimit.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * AuthToken data of an online service.
                */
                class AuthToken : public AbstractModel
                {
                public:
                    AuthToken();
                    ~AuthToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AuthToken basic information.
                     * @return Base AuthToken basic information.
                     * 
                     */
                    AuthTokenBase GetBase() const;

                    /**
                     * 设置AuthToken basic information.
                     * @param _base AuthToken basic information.
                     * 
                     */
                    void SetBase(const AuthTokenBase& _base);

                    /**
                     * 判断参数 Base 是否已赋值
                     * @return Base 是否已赋值
                     * 
                     */
                    bool BaseHasBeenSet() const;

                    /**
                     * 获取AuthToken throttling array.
                     * @return Limits AuthToken throttling array.
                     * 
                     */
                    std::vector<AuthTokenLimit> GetLimits() const;

                    /**
                     * 设置AuthToken throttling array.
                     * @param _limits AuthToken throttling array.
                     * 
                     */
                    void SetLimits(const std::vector<AuthTokenLimit>& _limits);

                    /**
                     * 判断参数 Limits 是否已赋值
                     * @return Limits 是否已赋值
                     * 
                     */
                    bool LimitsHasBeenSet() const;

                private:

                    /**
                     * AuthToken basic information.
                     */
                    AuthTokenBase m_base;
                    bool m_baseHasBeenSet;

                    /**
                     * AuthToken throttling array.
                     */
                    std::vector<AuthTokenLimit> m_limits;
                    bool m_limitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKEN_H_
