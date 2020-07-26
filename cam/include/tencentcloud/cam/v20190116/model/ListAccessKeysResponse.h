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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCESSKEYSRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCESSKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/AccessKey.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAccessKeys response structure.
                */
                class ListAccessKeysResponse : public AbstractModel
                {
                public:
                    ListAccessKeysResponse();
                    ~ListAccessKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Access key list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccessKeys Access key list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AccessKey> GetAccessKeys() const;

                    /**
                     * 判断参数 AccessKeys 是否已赋值
                     * @return AccessKeys 是否已赋值
                     */
                    bool AccessKeysHasBeenSet() const;

                private:

                    /**
                     * Access key list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AccessKey> m_accessKeys;
                    bool m_accessKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCESSKEYSRESPONSE_H_
