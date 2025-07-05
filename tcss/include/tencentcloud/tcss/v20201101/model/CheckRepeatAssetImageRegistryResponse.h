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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CHECKREPEATASSETIMAGEREGISTRYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CHECKREPEATASSETIMAGEREGISTRYRESPONSE_H_

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
                * CheckRepeatAssetImageRegistry response structure.
                */
                class CheckRepeatAssetImageRegistryResponse : public AbstractModel
                {
                public:
                    CheckRepeatAssetImageRegistryResponse();
                    ~CheckRepeatAssetImageRegistryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is repeated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRepeat Whether it is repeated
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsRepeat() const;

                    /**
                     * 判断参数 IsRepeat 是否已赋值
                     * @return IsRepeat 是否已赋值
                     * 
                     */
                    bool IsRepeatHasBeenSet() const;

                private:

                    /**
                     * Whether it is repeated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isRepeat;
                    bool m_isRepeatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CHECKREPEATASSETIMAGEREGISTRYRESPONSE_H_
