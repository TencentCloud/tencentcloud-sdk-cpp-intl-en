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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateCfsPGroup response structure.
                */
                class UpdateCfsPGroupResponse : public AbstractModel
                {
                public:
                    UpdateCfsPGroupResponse();
                    ~UpdateCfsPGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission group ID
                     * @return PGroupId Permission group ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取Permission group name
                     * @return Name Permission group name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return DescInfo Description
                     * 
                     */
                    std::string GetDescInfo() const;

                    /**
                     * 判断参数 DescInfo 是否已赋值
                     * @return DescInfo 是否已赋值
                     * 
                     */
                    bool DescInfoHasBeenSet() const;

                private:

                    /**
                     * Permission group ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * Permission group name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_descInfo;
                    bool m_descInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSPGROUPRESPONSE_H_
