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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_KEYSLOCALSTORAGERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_KEYSLOCALSTORAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * KeysLocalStorage response structure.
                */
                class KeysLocalStorageResponse : public AbstractModel
                {
                public:
                    KeysLocalStorageResponse();
                    ~KeysLocalStorageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Key List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keys Key List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                private:

                    /**
                     * Key List
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_KEYSLOCALSTORAGERESPONSE_H_
