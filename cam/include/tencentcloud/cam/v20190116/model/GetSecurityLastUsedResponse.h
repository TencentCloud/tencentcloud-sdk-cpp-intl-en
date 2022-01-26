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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETSECURITYLASTUSEDRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETSECURITYLASTUSEDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/SecretIdLastUsed.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetSecurityLastUsed response structure.
                */
                class GetSecurityLastUsedResponse : public AbstractModel
                {
                public:
                    GetSecurityLastUsedResponse();
                    ~GetSecurityLastUsedResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of key ID’s recent usage records.
                     * @return SecretIdLastUsedRows List of key ID’s recent usage records.
                     */
                    std::vector<SecretIdLastUsed> GetSecretIdLastUsedRows() const;

                    /**
                     * 判断参数 SecretIdLastUsedRows 是否已赋值
                     * @return SecretIdLastUsedRows 是否已赋值
                     */
                    bool SecretIdLastUsedRowsHasBeenSet() const;

                private:

                    /**
                     * List of key ID’s recent usage records.
                     */
                    std::vector<SecretIdLastUsed> m_secretIdLastUsedRows;
                    bool m_secretIdLastUsedRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETSECURITYLASTUSEDRESPONSE_H_
