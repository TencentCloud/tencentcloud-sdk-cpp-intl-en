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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEKEYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DeleteKeyPairs request structure.
                */
                class DeleteKeyPairsRequest : public AbstractModel
                {
                public:
                    DeleteKeyPairsRequest();
                    ~DeleteKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair ID list. Each request can contain up to 10 key pairs.
                     * @return KeyIds Key pair ID list. Each request can contain up to 10 key pairs.
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置Key pair ID list. Each request can contain up to 10 key pairs.
                     * @param KeyIds Key pair ID list. Each request can contain up to 10 key pairs.
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * Key pair ID list. Each request can contain up to 10 key pairs.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEKEYPAIRSREQUEST_H_
