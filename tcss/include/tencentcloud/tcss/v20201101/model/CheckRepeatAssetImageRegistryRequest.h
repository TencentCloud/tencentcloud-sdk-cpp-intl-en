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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CHECKREPEATASSETIMAGEREGISTRYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CHECKREPEATASSETIMAGEREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CheckRepeatAssetImageRegistry request structure.
                */
                class CheckRepeatAssetImageRegistryRequest : public AbstractModel
                {
                public:
                    CheckRepeatAssetImageRegistryRequest();
                    ~CheckRepeatAssetImageRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Repository name
                     * @return Name Repository name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Repository name
                     * @param _name Repository name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Repository name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CHECKREPEATASSETIMAGEREGISTRYREQUEST_H_
