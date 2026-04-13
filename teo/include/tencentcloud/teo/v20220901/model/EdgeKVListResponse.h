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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * EdgeKVList response structure.
                */
                class EdgeKVListResponse : public AbstractModel
                {
                public:
                    EdgeKVListResponse();
                    ~EdgeKVListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Key name list.
                     * @return Keys Key name list.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Cursor position. Indicates current traversal position to obtain next batch data. Fill in this value for the Cursor parameter in the next request to proceed with backward traversal. If it is an empty string, it means all data has been traversed.

                     * @return Cursor Cursor position. Indicates current traversal position to obtain next batch data. Fill in this value for the Cursor parameter in the next request to proceed with backward traversal. If it is an empty string, it means all data has been traversed.

                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                private:

                    /**
                     * Key name list.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Cursor position. Indicates current traversal position to obtain next batch data. Fill in this value for the Cursor parameter in the next request to proceed with backward traversal. If it is an empty string, it means all data has been traversed.

                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTRESPONSE_H_
