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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPIDSETOFUSERID_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPIDSETOFUSERID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Collections of the working groups bound to the same user
                */
                class WorkGroupIdSetOfUserId : public AbstractModel
                {
                public:
                    WorkGroupIdSetOfUserId();
                    ~WorkGroupIdSetOfUserId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID, which matches Uin on the CAM side.
                     * @return UserId User ID, which matches Uin on the CAM side.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID, which matches Uin on the CAM side.
                     * @param _userId User ID, which matches Uin on the CAM side.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Collections of IDs of working groups
                     * @return WorkGroupIds Collections of IDs of working groups
                     * 
                     */
                    std::vector<int64_t> GetWorkGroupIds() const;

                    /**
                     * 设置Collections of IDs of working groups
                     * @param _workGroupIds Collections of IDs of working groups
                     * 
                     */
                    void SetWorkGroupIds(const std::vector<int64_t>& _workGroupIds);

                    /**
                     * 判断参数 WorkGroupIds 是否已赋值
                     * @return WorkGroupIds 是否已赋值
                     * 
                     */
                    bool WorkGroupIdsHasBeenSet() const;

                private:

                    /**
                     * User ID, which matches Uin on the CAM side.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Collections of IDs of working groups
                     */
                    std::vector<int64_t> m_workGroupIds;
                    bool m_workGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPIDSETOFUSERID_H_
