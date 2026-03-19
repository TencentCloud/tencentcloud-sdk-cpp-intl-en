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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCETOMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCETOMEMBER_H_

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
                * Resources shared with me.
                */
                class ShareResourceToMember : public AbstractModel
                {
                public:
                    ShareResourceToMember();
                    ~ShareResourceToMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared unit resource ID.
                     * @return ResourceId Shared unit resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Shared unit resource ID.
                     * @param _resourceId Shared unit resource ID.
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
                     * 获取Resource type.
                     * @return Type Resource type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Resource type.
                     * @param _type Resource type.
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
                     * 获取Shared unit ID.
                     * @return UnitId Shared unit ID.
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置Shared unit ID.
                     * @param _unitId Shared unit ID.
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取Shared unit name.
                     * @return UnitName Shared unit name.
                     * 
                     */
                    std::string GetUnitName() const;

                    /**
                     * 设置Shared unit name.
                     * @param _unitName Shared unit name.
                     * 
                     */
                    void SetUnitName(const std::string& _unitName);

                    /**
                     * 判断参数 UnitName 是否已赋值
                     * @return UnitName 是否已赋值
                     * 
                     */
                    bool UnitNameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Business resource ID.
                     * @return ProductResourceId Business resource ID.
                     * 
                     */
                    std::string GetProductResourceId() const;

                    /**
                     * 设置Business resource ID.
                     * @param _productResourceId Business resource ID.
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
                     * 获取Shared account Uin.
                     * @return ShareManagerUin Shared account Uin.
                     * 
                     */
                    int64_t GetShareManagerUin() const;

                    /**
                     * 设置Shared account Uin.
                     * @param _shareManagerUin Shared account Uin.
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
                     * Shared unit resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Shared unit ID.
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * Shared unit name.
                     */
                    std::string m_unitName;
                    bool m_unitNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Business resource ID.
                     */
                    std::string m_productResourceId;
                    bool m_productResourceIdHasBeenSet;

                    /**
                     * Shared account Uin.
                     */
                    int64_t m_shareManagerUin;
                    bool m_shareManagerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SHARERESOURCETOMEMBER_H_
