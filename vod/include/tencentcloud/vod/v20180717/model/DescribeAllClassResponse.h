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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEALLCLASSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEALLCLASSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaClassInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeAllClass response structure.
                */
                class DescribeAllClassResponse : public AbstractModel
                {
                public:
                    DescribeAllClassResponse();
                    ~DescribeAllClassResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Category information set
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassInfoSet Category information set
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaClassInfo> GetClassInfoSet() const;

                    /**
                     * 判断参数 ClassInfoSet 是否已赋值
                     * @return ClassInfoSet 是否已赋值
                     * 
                     */
                    bool ClassInfoSetHasBeenSet() const;

                private:

                    /**
                     * Category information set
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaClassInfo> m_classInfoSet;
                    bool m_classInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEALLCLASSRESPONSE_H_
