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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FETCHOPTION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FETCHOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Data access options for controlling which additional content to return in the response to get/list requests.
                */
                class FetchOption : public AbstractModel
                {
                public:
                    FetchOption();
                    ~FetchOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to return the permission list in response. Default false.</p>
                     * @return FetchPermissions <p>Whether to return the permission list in response. Default false.</p>
                     * 
                     */
                    bool GetFetchPermissions() const;

                    /**
                     * 设置<p>Whether to return the permission list in response. Default false.</p>
                     * @param _fetchPermissions <p>Whether to return the permission list in response. Default false.</p>
                     * 
                     */
                    void SetFetchPermissions(const bool& _fetchPermissions);

                    /**
                     * 判断参数 FetchPermissions 是否已赋值
                     * @return FetchPermissions 是否已赋值
                     * 
                     */
                    bool FetchPermissionsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to obtain feature table details. Valid when AssetType is TABLE.</p>
                     * @return FetchFeatureTableDetail <p>Whether to obtain feature table details. Valid when AssetType is TABLE.</p>
                     * 
                     */
                    bool GetFetchFeatureTableDetail() const;

                    /**
                     * 设置<p>Whether to obtain feature table details. Valid when AssetType is TABLE.</p>
                     * @param _fetchFeatureTableDetail <p>Whether to obtain feature table details. Valid when AssetType is TABLE.</p>
                     * 
                     */
                    void SetFetchFeatureTableDetail(const bool& _fetchFeatureTableDetail);

                    /**
                     * 判断参数 FetchFeatureTableDetail 是否已赋值
                     * @return FetchFeatureTableDetail 是否已赋值
                     * 
                     */
                    bool FetchFeatureTableDetailHasBeenSet() const;

                    /**
                     * 获取<p>Filter by permission. Pass in a list of permissions to return only entities for which the current user has the specified permissions. For example, passing in ["SELECT_TABLE"] returns only entities for which the current user has the SELECT_TABLE permission. This only takes effect for the list Interface. If empty, no permission filtering is performed.</p>
                     * @return FilterPermissions <p>Filter by permission. Pass in a list of permissions to return only entities for which the current user has the specified permissions. For example, passing in ["SELECT_TABLE"] returns only entities for which the current user has the SELECT_TABLE permission. This only takes effect for the list Interface. If empty, no permission filtering is performed.</p>
                     * 
                     */
                    std::vector<std::string> GetFilterPermissions() const;

                    /**
                     * 设置<p>Filter by permission. Pass in a list of permissions to return only entities for which the current user has the specified permissions. For example, passing in ["SELECT_TABLE"] returns only entities for which the current user has the SELECT_TABLE permission. This only takes effect for the list Interface. If empty, no permission filtering is performed.</p>
                     * @param _filterPermissions <p>Filter by permission. Pass in a list of permissions to return only entities for which the current user has the specified permissions. For example, passing in ["SELECT_TABLE"] returns only entities for which the current user has the SELECT_TABLE permission. This only takes effect for the list Interface. If empty, no permission filtering is performed.</p>
                     * 
                     */
                    void SetFilterPermissions(const std::vector<std::string>& _filterPermissions);

                    /**
                     * 判断参数 FilterPermissions 是否已赋值
                     * @return FilterPermissions 是否已赋值
                     * 
                     */
                    bool FilterPermissionsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return person in charge information in response. If this parameter is not passed or is true, the person in charge information is returned by default. If it is explicitly set to false, it is not returned.</p>
                     * @return FetchOwners <p>Whether to return person in charge information in response. If this parameter is not passed or is true, the person in charge information is returned by default. If it is explicitly set to false, it is not returned.</p>
                     * 
                     */
                    bool GetFetchOwners() const;

                    /**
                     * 设置<p>Whether to return person in charge information in response. If this parameter is not passed or is true, the person in charge information is returned by default. If it is explicitly set to false, it is not returned.</p>
                     * @param _fetchOwners <p>Whether to return person in charge information in response. If this parameter is not passed or is true, the person in charge information is returned by default. If it is explicitly set to false, it is not returned.</p>
                     * 
                     */
                    void SetFetchOwners(const bool& _fetchOwners);

                    /**
                     * 判断参数 FetchOwners 是否已赋值
                     * @return FetchOwners 是否已赋值
                     * 
                     */
                    bool FetchOwnersHasBeenSet() const;

                    /**
                     * 获取<p>Whether to convert user Uin to userName. Impact range: CreatorName/LastModifierName in Audit, OwnerName in MetaOwner. If not passed or set to true, conversion is executed (default conversion). If explicitly set to false, do not convert</p>
                     * @return FetchUserInfo <p>Whether to convert user Uin to userName. Impact range: CreatorName/LastModifierName in Audit, OwnerName in MetaOwner. If not passed or set to true, conversion is executed (default conversion). If explicitly set to false, do not convert</p>
                     * 
                     */
                    bool GetFetchUserInfo() const;

                    /**
                     * 设置<p>Whether to convert user Uin to userName. Impact range: CreatorName/LastModifierName in Audit, OwnerName in MetaOwner. If not passed or set to true, conversion is executed (default conversion). If explicitly set to false, do not convert</p>
                     * @param _fetchUserInfo <p>Whether to convert user Uin to userName. Impact range: CreatorName/LastModifierName in Audit, OwnerName in MetaOwner. If not passed or set to true, conversion is executed (default conversion). If explicitly set to false, do not convert</p>
                     * 
                     */
                    void SetFetchUserInfo(const bool& _fetchUserInfo);

                    /**
                     * 判断参数 FetchUserInfo 是否已赋值
                     * @return FetchUserInfo 是否已赋值
                     * 
                     */
                    bool FetchUserInfoHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return field masking policy information. It is not returned by default. If true is passed in, the field masking policy information corresponding to the table fields will be queried.</p>
                     * @return FetchMask <p>Whether to return field masking policy information. It is not returned by default. If true is passed in, the field masking policy information corresponding to the table fields will be queried.</p>
                     * 
                     */
                    bool GetFetchMask() const;

                    /**
                     * 设置<p>Whether to return field masking policy information. It is not returned by default. If true is passed in, the field masking policy information corresponding to the table fields will be queried.</p>
                     * @param _fetchMask <p>Whether to return field masking policy information. It is not returned by default. If true is passed in, the field masking policy information corresponding to the table fields will be queried.</p>
                     * 
                     */
                    void SetFetchMask(const bool& _fetchMask);

                    /**
                     * 判断参数 FetchMask 是否已赋值
                     * @return FetchMask 是否已赋值
                     * 
                     */
                    bool FetchMaskHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return tag information. By default, it is not returned. When set to true, APIs such as GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels will return the Tags field in the corresponding entity.</p>
                     * @return FetchTags <p>Whether to return tag information. By default, it is not returned. When set to true, APIs such as GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels will return the Tags field in the corresponding entity.</p>
                     * 
                     */
                    bool GetFetchTags() const;

                    /**
                     * 设置<p>Whether to return tag information. By default, it is not returned. When set to true, APIs such as GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels will return the Tags field in the corresponding entity.</p>
                     * @param _fetchTags <p>Whether to return tag information. By default, it is not returned. When set to true, APIs such as GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels will return the Tags field in the corresponding entity.</p>
                     * 
                     */
                    void SetFetchTags(const bool& _fetchTags);

                    /**
                     * 判断参数 FetchTags 是否已赋值
                     * @return FetchTags 是否已赋值
                     * 
                     */
                    bool FetchTagsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return the dictionary dimension information associated with the returned field. Default not passed, do not return</p>
                     * @return FetchDimensions <p>Whether to return the dictionary dimension information associated with the returned field. Default not passed, do not return</p>
                     * 
                     */
                    bool GetFetchDimensions() const;

                    /**
                     * 设置<p>Whether to return the dictionary dimension information associated with the returned field. Default not passed, do not return</p>
                     * @param _fetchDimensions <p>Whether to return the dictionary dimension information associated with the returned field. Default not passed, do not return</p>
                     * 
                     */
                    void SetFetchDimensions(const bool& _fetchDimensions);

                    /**
                     * 判断参数 FetchDimensions 是否已赋值
                     * @return FetchDimensions 是否已赋值
                     * 
                     */
                    bool FetchDimensionsHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to return the permission list in response. Default false.</p>
                     */
                    bool m_fetchPermissions;
                    bool m_fetchPermissionsHasBeenSet;

                    /**
                     * <p>Whether to obtain feature table details. Valid when AssetType is TABLE.</p>
                     */
                    bool m_fetchFeatureTableDetail;
                    bool m_fetchFeatureTableDetailHasBeenSet;

                    /**
                     * <p>Filter by permission. Pass in a list of permissions to return only entities for which the current user has the specified permissions. For example, passing in ["SELECT_TABLE"] returns only entities for which the current user has the SELECT_TABLE permission. This only takes effect for the list Interface. If empty, no permission filtering is performed.</p>
                     */
                    std::vector<std::string> m_filterPermissions;
                    bool m_filterPermissionsHasBeenSet;

                    /**
                     * <p>Whether to return person in charge information in response. If this parameter is not passed or is true, the person in charge information is returned by default. If it is explicitly set to false, it is not returned.</p>
                     */
                    bool m_fetchOwners;
                    bool m_fetchOwnersHasBeenSet;

                    /**
                     * <p>Whether to convert user Uin to userName. Impact range: CreatorName/LastModifierName in Audit, OwnerName in MetaOwner. If not passed or set to true, conversion is executed (default conversion). If explicitly set to false, do not convert</p>
                     */
                    bool m_fetchUserInfo;
                    bool m_fetchUserInfoHasBeenSet;

                    /**
                     * <p>Whether to return field masking policy information. It is not returned by default. If true is passed in, the field masking policy information corresponding to the table fields will be queried.</p>
                     */
                    bool m_fetchMask;
                    bool m_fetchMaskHasBeenSet;

                    /**
                     * <p>Whether to return tag information. By default, it is not returned. When set to true, APIs such as GetTable/ListTables/GetCatalog/ListCatalogs/GetSchema/ListSchemas/GetView/ListViews/GetFunction/ListFunctions/GetVolume/ListVolumes/GetModel/ListModels will return the Tags field in the corresponding entity.</p>
                     */
                    bool m_fetchTags;
                    bool m_fetchTagsHasBeenSet;

                    /**
                     * <p>Whether to return the dictionary dimension information associated with the returned field. Default not passed, do not return</p>
                     */
                    bool m_fetchDimensions;
                    bool m_fetchDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FETCHOPTION_H_
