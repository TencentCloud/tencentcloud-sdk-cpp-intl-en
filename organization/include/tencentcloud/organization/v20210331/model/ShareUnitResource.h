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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITRESOURCE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Shared unit resources
                */
                class ShareUnitResource : public AbstractModel
                {
                public:
                    ShareUnitResource();
                    ~ShareUnitResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared resource ID.
                     * @return ResourceId Shared resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Shared resource ID.
                     * @param _resourceId Shared resource ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Shared resource type.
                     * @return Type Shared resource type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Shared resource type.
                     * @param _type Shared resource type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Product resource ID.
                     * @return ProductResourceId Product resource ID.
                     * 
                     */
                    std::string GetProductResourceId() const;

                    /**
                     * 设置Product resource ID.
                     * @param _productResourceId Product resource ID.
                     * 
                     */
                    void SetProductResourceId(const std::string& _productResourceId);

                    /**
                     * 判断参数 ProductResourceId 是否已赋值
                     * @return ProductResourceId 是否已赋值
                     * 
                     */
                    bool ProductResourceIdHasBeenSet() const;

                    /**
                     * 获取The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SharedMemberNum The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSharedMemberNum() const;

                    /**
                     * 设置The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sharedMemberNum The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharedMemberNum(const uint64_t& _sharedMemberNum);

                    /**
                     * 判断参数 SharedMemberNum 是否已赋值
                     * @return SharedMemberNum 是否已赋值
                     * 
                     */
                    bool SharedMemberNumHasBeenSet() const;

                    /**
                     * 获取The number of shared unit members in use.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SharedMemberUseNum The number of shared unit members in use.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSharedMemberUseNum() const;

                    /**
                     * 设置The number of shared unit members in use.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sharedMemberUseNum The number of shared unit members in use.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharedMemberUseNum(const uint64_t& _sharedMemberUseNum);

                    /**
                     * 判断参数 SharedMemberUseNum 是否已赋值
                     * @return SharedMemberUseNum 是否已赋值
                     * 
                     */
                    bool SharedMemberUseNumHasBeenSet() const;

                    /**
                     * 获取Shared administrator OwnerUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShareManagerUin Shared administrator OwnerUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetShareManagerUin() const;

                    /**
                     * 设置Shared administrator OwnerUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shareManagerUin Shared administrator OwnerUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShareManagerUin(const int64_t& _shareManagerUin);

                    /**
                     * 判断参数 ShareManagerUin 是否已赋值
                     * @return ShareManagerUin 是否已赋值
                     * 
                     */
                    bool ShareManagerUinHasBeenSet() const;

                private:

                    /**
                     * Shared resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Shared resource type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Creation time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Product resource ID.
                     */
                    std::string m_productResourceId;
                    bool m_productResourceIdHasBeenSet;

                    /**
                     * The number of members in a shared unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sharedMemberNum;
                    bool m_sharedMemberNumHasBeenSet;

                    /**
                     * The number of shared unit members in use.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sharedMemberUseNum;
                    bool m_sharedMemberUseNumHasBeenSet;

                    /**
                     * Shared administrator OwnerUin.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shareManagerUin;
                    bool m_shareManagerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHAREUNITRESOURCE_H_
