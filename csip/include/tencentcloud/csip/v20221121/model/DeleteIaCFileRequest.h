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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEIACFILEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEIACFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteIaCFile request structure.
                */
                class DeleteIaCFileRequest : public AbstractModel
                {
                public:
                    DeleteIaCFileRequest();
                    ~DeleteIaCFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Delete ID list</p>
                     * @return Id <p>Delete ID list</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>Delete ID list</p>
                     * @param _id <p>Delete ID list</p>
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * <p>Delete ID list</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEIACFILEREQUEST_H_
