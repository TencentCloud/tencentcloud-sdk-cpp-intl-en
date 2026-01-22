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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONVERT3DFORMATRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONVERT3DFORMATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Convert3DFormat response structure.
                */
                class Convert3DFormatResponse : public AbstractModel
                {
                public:
                    Convert3DFormatResponse();
                    ~Convert3DFormatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取3D file address
                     * @return ResultFile3D 3D file address
                     * 
                     */
                    std::string GetResultFile3D() const;

                    /**
                     * 判断参数 ResultFile3D 是否已赋值
                     * @return ResultFile3D 是否已赋值
                     * 
                     */
                    bool ResultFile3DHasBeenSet() const;

                private:

                    /**
                     * 3D file address
                     */
                    std::string m_resultFile3D;
                    bool m_resultFile3DHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONVERT3DFORMATRESPONSE_H_
