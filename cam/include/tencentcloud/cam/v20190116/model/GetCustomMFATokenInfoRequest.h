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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETCUSTOMMFATOKENINFOREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETCUSTOMMFATOKENINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetCustomMFATokenInfo request structure.
                */
                class GetCustomMFATokenInfoRequest : public AbstractModel
                {
                public:
                    GetCustomMFATokenInfoRequest();
                    ~GetCustomMFATokenInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom multi-factor verification Token
                     * @return MFAToken Custom multi-factor verification Token
                     */
                    std::string GetMFAToken() const;

                    /**
                     * 设置Custom multi-factor verification Token
                     * @param MFAToken Custom multi-factor verification Token
                     */
                    void SetMFAToken(const std::string& _mFAToken);

                    /**
                     * 判断参数 MFAToken 是否已赋值
                     * @return MFAToken 是否已赋值
                     */
                    bool MFATokenHasBeenSet() const;

                private:

                    /**
                     * Custom multi-factor verification Token
                     */
                    std::string m_mFAToken;
                    bool m_mFATokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETCUSTOMMFATOKENINFOREQUEST_H_
