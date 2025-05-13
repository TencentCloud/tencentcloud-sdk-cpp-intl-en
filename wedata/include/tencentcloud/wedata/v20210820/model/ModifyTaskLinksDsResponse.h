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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyTaskLinksDs response structure.
                */
                class ModifyTaskLinksDsResponse : public AbstractModel
                {
                public:
                    ModifyTaskLinksDsResponse();
                    ~ModifyTaskLinksDsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Succeeded or Failed

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Succeeded or Failed

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取linkID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LinkId linkID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 判断参数 LinkId 是否已赋值
                     * @return LinkId 是否已赋值
                     * 
                     */
                    bool LinkIdHasBeenSet() const;

                private:

                    /**
                     * Succeeded or Failed

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * linkID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSRESPONSE_H_
