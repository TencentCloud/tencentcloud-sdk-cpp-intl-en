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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TimeRange.h>
#include <tencentcloud/vod/v20180717/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SearchMedia request structure.
                */
                class SearchMediaRequest : public AbstractModel
                {
                public:
                    SearchMediaRequest();
                    ~SearchMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取File ID set. Any element in the set can be matched.
<li>Array length limit: 10.</li>
<li>ID length limit: 40 characters.</li>
                     * @return FileIds File ID set. Any element in the set can be matched.
<li>Array length limit: 10.</li>
<li>ID length limit: 40 characters.</li>
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置File ID set. Any element in the set can be matched.
<li>Array length limit: 10.</li>
<li>ID length limit: 40 characters.</li>
                     * @param FileIds File ID set. Any element in the set can be matched.
<li>Array length limit: 10.</li>
<li>ID length limit: 40 characters.</li>
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取The file names to use for fuzzy search, which are sorted by relevance in descending order.
<li>Name length limit: 100 characters.</li>
<li>Array length limit: 10</li>
                     * @return Names The file names to use for fuzzy search, which are sorted by relevance in descending order.
<li>Name length limit: 100 characters.</li>
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置The file names to use for fuzzy search, which are sorted by relevance in descending order.
<li>Name length limit: 100 characters.</li>
<li>Array length limit: 10</li>
                     * @param Names The file names to use for fuzzy search, which are sorted by relevance in descending order.
<li>Name length limit: 100 characters.</li>
<li>Array length limit: 10</li>
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取The file name prefixes to search.
<li>Prefix length limit: 100 characters.</li>
<li>Array length limit: 10.</li>
                     * @return NamePrefixes The file name prefixes to search.
<li>Prefix length limit: 100 characters.</li>
<li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> GetNamePrefixes() const;

                    /**
                     * 设置The file name prefixes to search.
<li>Prefix length limit: 100 characters.</li>
<li>Array length limit: 10.</li>
                     * @param NamePrefixes The file name prefixes to search.
<li>Prefix length limit: 100 characters.</li>
<li>Array length limit: 10.</li>
                     */
                    void SetNamePrefixes(const std::vector<std::string>& _namePrefixes);

                    /**
                     * 判断参数 NamePrefixes 是否已赋值
                     * @return NamePrefixes 是否已赋值
                     */
                    bool NamePrefixesHasBeenSet() const;

                    /**
                     * 获取File description set. Media file descriptions are fuzzily matched. The higher the match rate, the higher-ranked the result.
<li>Length limit for a single description: 100 characters</li>
<li>Array length limit: 10</li>
                     * @return Descriptions File description set. Media file descriptions are fuzzily matched. The higher the match rate, the higher-ranked the result.
<li>Length limit for a single description: 100 characters</li>
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> GetDescriptions() const;

                    /**
                     * 设置File description set. Media file descriptions are fuzzily matched. The higher the match rate, the higher-ranked the result.
<li>Length limit for a single description: 100 characters</li>
<li>Array length limit: 10</li>
                     * @param Descriptions File description set. Media file descriptions are fuzzily matched. The higher the match rate, the higher-ranked the result.
<li>Length limit for a single description: 100 characters</li>
<li>Array length limit: 10</li>
                     */
                    void SetDescriptions(const std::vector<std::string>& _descriptions);

                    /**
                     * 判断参数 Descriptions 是否已赋值
                     * @return Descriptions 是否已赋值
                     */
                    bool DescriptionsHasBeenSet() const;

                    /**
                     * 获取Category ID set. The categories of the specified IDs and all subcategories in the set are matched.
<li>Array length limit: 10.</li>
                     * @return ClassIds Category ID set. The categories of the specified IDs and all subcategories in the set are matched.
<li>Array length limit: 10.</li>
                     */
                    std::vector<int64_t> GetClassIds() const;

                    /**
                     * 设置Category ID set. The categories of the specified IDs and all subcategories in the set are matched.
<li>Array length limit: 10.</li>
                     * @param ClassIds Category ID set. The categories of the specified IDs and all subcategories in the set are matched.
<li>Array length limit: 10.</li>
                     */
                    void SetClassIds(const std::vector<int64_t>& _classIds);

                    /**
                     * 判断参数 ClassIds 是否已赋值
                     * @return ClassIds 是否已赋值
                     */
                    bool ClassIdsHasBeenSet() const;

                    /**
                     * 获取The tags to search. A file is considered a match if it has any of the tags specified.
<li>Tag length limit: 32 characters.</li>
<li>Array length limit: 16.</li>
                     * @return Tags The tags to search. A file is considered a match if it has any of the tags specified.
<li>Tag length limit: 32 characters.</li>
<li>Array length limit: 16.</li>
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置The tags to search. A file is considered a match if it has any of the tags specified.
<li>Tag length limit: 32 characters.</li>
<li>Array length limit: 16.</li>
                     * @param Tags The tags to search. A file is considered a match if it has any of the tags specified.
<li>Tag length limit: 32 characters.</li>
<li>Array length limit: 16.</li>
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取File type. Any element in the set can be matched.
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     * @return Categories File type. Any element in the set can be matched.
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置File type. Any element in the set can be matched.
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     * @param Categories File type. Any element in the set can be matched.
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     */
                    bool CategoriesHasBeenSet() const;

                    /**
                     * 获取Media file source set. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
<li>Array length limit: 10.</li>
                     * @return SourceTypes Media file source set. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
<li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置Media file source set. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
<li>Array length limit: 10.</li>
                     * @param SourceTypes Media file source set. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
<li>Array length limit: 10.</li>
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取The live stream code array. A media file will be returned if it matches any element in the array.
<li>Array length limit: 10</li>
                     * @return StreamIds The live stream code array. A media file will be returned if it matches any element in the array.
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> GetStreamIds() const;

                    /**
                     * 设置The live stream code array. A media file will be returned if it matches any element in the array.
<li>Array length limit: 10</li>
                     * @param StreamIds The live stream code array. A media file will be returned if it matches any element in the array.
<li>Array length limit: 10</li>
                     */
                    void SetStreamIds(const std::vector<std::string>& _streamIds);

                    /**
                     * 判断参数 StreamIds 是否已赋值
                     * @return StreamIds 是否已赋值
                     */
                    bool StreamIdsHasBeenSet() const;

                    /**
                     * 获取Matches files created within the time period.
<li>Includes specified start and end points in time.</li>
                     * @return CreateTime Matches files created within the time period.
<li>Includes specified start and end points in time.</li>
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置Matches files created within the time period.
<li>Includes specified start and end points in time.</li>
                     * @param CreateTime Matches files created within the time period.
<li>Includes specified start and end points in time.</li>
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Files whose expiration time points are within the specified time range will be returned. Expired files will not be returned.
<li>The files whose expiration time points are on the start or end time of the specified range will also be returned.</li>
                     * @return ExpireTime Files whose expiration time points are within the specified time range will be returned. Expired files will not be returned.
<li>The files whose expiration time points are on the start or end time of the specified range will also be returned.</li>
                     */
                    TimeRange GetExpireTime() const;

                    /**
                     * 设置Files whose expiration time points are within the specified time range will be returned. Expired files will not be returned.
<li>The files whose expiration time points are on the start or end time of the specified range will also be returned.</li>
                     * @param ExpireTime Files whose expiration time points are within the specified time range will be returned. Expired files will not be returned.
<li>The files whose expiration time points are on the start or end time of the specified range will also be returned.</li>
                     */
                    void SetExpireTime(const TimeRange& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Sorting order.
<li>Valid value of `Sort.Field`: CreateTime.</li>
<li>If `Text`, `Names`, or `Descriptions` is not empty, the `Sort.Field` field will not take effect, and the search results will be sorted by match rate.</li>
                     * @return Sort Sorting order.
<li>Valid value of `Sort.Field`: CreateTime.</li>
<li>If `Text`, `Names`, or `Descriptions` is not empty, the `Sort.Field` field will not take effect, and the search results will be sorted by match rate.</li>
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置Sorting order.
<li>Valid value of `Sort.Field`: CreateTime.</li>
<li>If `Text`, `Names`, or `Descriptions` is not empty, the `Sort.Field` field will not take effect, and the search results will be sorted by match rate.</li>
                     * @param Sort Sorting order.
<li>Valid value of `Sort.Field`: CreateTime.</li>
<li>If `Text`, `Names`, or `Descriptions` is not empty, the `Sort.Field` field will not take effect, and the search results will be sorted by match rate.</li>
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<div id="p_offset">Start offset of a paged return. Default value: 0. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     * @return Offset <div id="p_offset">Start offset of a paged return. Default value: 0. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<div id="p_offset">Start offset of a paged return. Default value: 0. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     * @param Offset <div id="p_offset">Start offset of a paged return. Default value: 0. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<div id="p_limit">Number of entries returned by a paged query. Default value: 10. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     * @return Limit <div id="p_limit">Number of entries returned by a paged query. Default value: 10. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<div id="p_limit">Number of entries returned by a paged query. Default value: 10. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     * @param Limit <div id="p_limit">Number of entries returned by a paged query. Default value: 10. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies information entry that needs to be returned for all media files. Multiple entries can be specified simultaneously. N starts from 0. If this field is left empty, all information entries will be returned by default. Valid values:
<li>basicInfo (basic video information).</li>
<li>metaData (video metadata).</li>
<li>transcodeInfo (result information of video transcoding).</li>
<li>animatedGraphicsInfo (result information of animated image generating task).</li>
<li>imageSpriteInfo (image sprite information).</li>
<li>snapshotByTimeOffsetInfo (point-in-time screenshot information).</li>
<li>sampleSnapshotInfo (sampled screenshot information).</li>
<li>keyFrameDescInfo (timestamp information).</li>
<li>adaptiveDynamicStreamingInfo (information of adaptive bitrate streaming).</li>
<li>miniProgramReviewInfo (WeChat Mini Program audit information).</li>
                     * @return Filters Specifies information entry that needs to be returned for all media files. Multiple entries can be specified simultaneously. N starts from 0. If this field is left empty, all information entries will be returned by default. Valid values:
<li>basicInfo (basic video information).</li>
<li>metaData (video metadata).</li>
<li>transcodeInfo (result information of video transcoding).</li>
<li>animatedGraphicsInfo (result information of animated image generating task).</li>
<li>imageSpriteInfo (image sprite information).</li>
<li>snapshotByTimeOffsetInfo (point-in-time screenshot information).</li>
<li>sampleSnapshotInfo (sampled screenshot information).</li>
<li>keyFrameDescInfo (timestamp information).</li>
<li>adaptiveDynamicStreamingInfo (information of adaptive bitrate streaming).</li>
<li>miniProgramReviewInfo (WeChat Mini Program audit information).</li>
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置Specifies information entry that needs to be returned for all media files. Multiple entries can be specified simultaneously. N starts from 0. If this field is left empty, all information entries will be returned by default. Valid values:
<li>basicInfo (basic video information).</li>
<li>metaData (video metadata).</li>
<li>transcodeInfo (result information of video transcoding).</li>
<li>animatedGraphicsInfo (result information of animated image generating task).</li>
<li>imageSpriteInfo (image sprite information).</li>
<li>snapshotByTimeOffsetInfo (point-in-time screenshot information).</li>
<li>sampleSnapshotInfo (sampled screenshot information).</li>
<li>keyFrameDescInfo (timestamp information).</li>
<li>adaptiveDynamicStreamingInfo (information of adaptive bitrate streaming).</li>
<li>miniProgramReviewInfo (WeChat Mini Program audit information).</li>
                     * @param Filters Specifies information entry that needs to be returned for all media files. Multiple entries can be specified simultaneously. N starts from 0. If this field is left empty, all information entries will be returned by default. Valid values:
<li>basicInfo (basic video information).</li>
<li>metaData (video metadata).</li>
<li>transcodeInfo (result information of video transcoding).</li>
<li>animatedGraphicsInfo (result information of animated image generating task).</li>
<li>imageSpriteInfo (image sprite information).</li>
<li>snapshotByTimeOffsetInfo (point-in-time screenshot information).</li>
<li>sampleSnapshotInfo (sampled screenshot information).</li>
<li>keyFrameDescInfo (timestamp information).</li>
<li>adaptiveDynamicStreamingInfo (information of adaptive bitrate streaming).</li>
<li>miniProgramReviewInfo (WeChat Mini Program audit information).</li>
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Regions](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8).
<li>Length limit for a single region: 20 characters</li>
<li>Array length limit: 20</li>
                     * @return StorageRegions Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Regions](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8).
<li>Length limit for a single region: 20 characters</li>
<li>Array length limit: 20</li>
                     */
                    std::vector<std::string> GetStorageRegions() const;

                    /**
                     * 设置Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Regions](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8).
<li>Length limit for a single region: 20 characters</li>
<li>Array length limit: 20</li>
                     * @param StorageRegions Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Regions](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8).
<li>Length limit for a single region: 20 characters</li>
<li>Array length limit: 20</li>
                     */
                    void SetStorageRegions(const std::vector<std::string>& _storageRegions);

                    /**
                     * 判断参数 StorageRegions 是否已赋值
                     * @return StorageRegions 是否已赋值
                     */
                    bool StorageRegionsHasBeenSet() const;

                    /**
                     * 获取An array of storage classes. Valid values:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     * @return StorageClasses An array of storage classes. Valid values:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     */
                    std::vector<std::string> GetStorageClasses() const;

                    /**
                     * 设置An array of storage classes. Valid values:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     * @param StorageClasses An array of storage classes. Valid values:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     */
                    void SetStorageClasses(const std::vector<std::string>& _storageClasses);

                    /**
                     * 判断参数 StorageClasses 是否已赋值
                     * @return StorageClasses 是否已赋值
                     */
                    bool StorageClassesHasBeenSet() const;

                    /**
                     * 获取The file formats.
<li>Array length limit: 10</li>
                     * @return MediaTypes The file formats.
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> GetMediaTypes() const;

                    /**
                     * 设置The file formats.
<li>Array length limit: 10</li>
                     * @param MediaTypes The file formats.
<li>Array length limit: 10</li>
                     */
                    void SetMediaTypes(const std::vector<std::string>& _mediaTypes);

                    /**
                     * 判断参数 MediaTypes 是否已赋值
                     * @return MediaTypes 是否已赋值
                     */
                    bool MediaTypesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置
                     * @param Status 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReviewResults 
                     */
                    std::vector<std::string> GetReviewResults() const;

                    /**
                     * 设置
                     * @param ReviewResults 
                     */
                    void SetReviewResults(const std::vector<std::string>& _reviewResults);

                    /**
                     * 判断参数 ReviewResults 是否已赋值
                     * @return ReviewResults 是否已赋值
                     */
                    bool ReviewResultsHasBeenSet() const;

                    /**
                     * 获取The TRTC application IDs. Any file that matches one of the application IDs will be returned.
<li>Array length limit: 10</li>
                     * @return TrtcSdkAppIds The TRTC application IDs. Any file that matches one of the application IDs will be returned.
<li>Array length limit: 10</li>
                     */
                    std::vector<uint64_t> GetTrtcSdkAppIds() const;

                    /**
                     * 设置The TRTC application IDs. Any file that matches one of the application IDs will be returned.
<li>Array length limit: 10</li>
                     * @param TrtcSdkAppIds The TRTC application IDs. Any file that matches one of the application IDs will be returned.
<li>Array length limit: 10</li>
                     */
                    void SetTrtcSdkAppIds(const std::vector<uint64_t>& _trtcSdkAppIds);

                    /**
                     * 判断参数 TrtcSdkAppIds 是否已赋值
                     * @return TrtcSdkAppIds 是否已赋值
                     */
                    bool TrtcSdkAppIdsHasBeenSet() const;

                    /**
                     * 获取The TRTC room IDs. Any file that matches one of the room IDs will be returned.
<li>Element length limit: 64 characters.</li>
<li>Array length limit: 10.</li>
                     * @return TrtcRoomIds The TRTC room IDs. Any file that matches one of the room IDs will be returned.
<li>Element length limit: 64 characters.</li>
<li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> GetTrtcRoomIds() const;

                    /**
                     * 设置The TRTC room IDs. Any file that matches one of the room IDs will be returned.
<li>Element length limit: 64 characters.</li>
<li>Array length limit: 10.</li>
                     * @param TrtcRoomIds The TRTC room IDs. Any file that matches one of the room IDs will be returned.
<li>Element length limit: 64 characters.</li>
<li>Array length limit: 10.</li>
                     */
                    void SetTrtcRoomIds(const std::vector<std::string>& _trtcRoomIds);

                    /**
                     * 判断参数 TrtcRoomIds 是否已赋值
                     * @return TrtcRoomIds 是否已赋值
                     */
                    bool TrtcRoomIdsHasBeenSet() const;

                    /**
                     * 获取(This is not recommended. `Names`, `NamePrefixes`, or `Descriptions` should be used instead)
Search text, which fuzzily matches the media file name or description. The more matching items and the higher the match rate, the higher-ranked the result. It can contain up to 64 characters.
                     * @return Text (This is not recommended. `Names`, `NamePrefixes`, or `Descriptions` should be used instead)
Search text, which fuzzily matches the media file name or description. The more matching items and the higher the match rate, the higher-ranked the result. It can contain up to 64 characters.
                     */
                    std::string GetText() const;

                    /**
                     * 设置(This is not recommended. `Names`, `NamePrefixes`, or `Descriptions` should be used instead)
Search text, which fuzzily matches the media file name or description. The more matching items and the higher the match rate, the higher-ranked the result. It can contain up to 64 characters.
                     * @param Text (This is not recommended. `Names`, `NamePrefixes`, or `Descriptions` should be used instead)
Search text, which fuzzily matches the media file name or description. The more matching items and the higher the match rate, the higher-ranked the result. It can contain up to 64 characters.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取(This is not recommended. `SourceTypes` should be used instead)
Media file source. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
                     * @return SourceType (This is not recommended. `SourceTypes` should be used instead)
Media file source. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置(This is not recommended. `SourceTypes` should be used instead)
Media file source. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
                     * @param SourceType (This is not recommended. `SourceTypes` should be used instead)
Media file source. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取(Not recommended. Consider using `StreamIds` instead.)
The live stream code.
                     * @return StreamId (Not recommended. Consider using `StreamIds` instead.)
The live stream code.
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置(Not recommended. Consider using `StreamIds` instead.)
The live stream code.
                     * @param StreamId (Not recommended. Consider using `StreamIds` instead.)
The live stream code.
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取(This is not recommended. `CreateTime` should be used instead)
Start time in the creation time range.
<li>After or at the start time.</li>
<li>If `CreateTime.After` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @return StartTime (This is not recommended. `CreateTime` should be used instead)
Start time in the creation time range.
<li>After or at the start time.</li>
<li>If `CreateTime.After` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置(This is not recommended. `CreateTime` should be used instead)
Start time in the creation time range.
<li>After or at the start time.</li>
<li>If `CreateTime.After` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @param StartTime (This is not recommended. `CreateTime` should be used instead)
Start time in the creation time range.
<li>After or at the start time.</li>
<li>If `CreateTime.After` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取(This is not recommended. `CreateTime` should be used instead)
End time in the creation time range.
<li>Before the end time.</li>
<li>If `CreateTime.Before` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @return EndTime (This is not recommended. `CreateTime` should be used instead)
End time in the creation time range.
<li>Before the end time.</li>
<li>If `CreateTime.Before` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置(This is not recommended. `CreateTime` should be used instead)
End time in the creation time range.
<li>Before the end time.</li>
<li>If `CreateTime.Before` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @param EndTime (This is not recommended. `CreateTime` should be used instead)
End time in the creation time range.
<li>Before the end time.</li>
<li>If `CreateTime.Before` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is invalid now.
                     * @return Vids This parameter is invalid now.
                     */
                    std::vector<std::string> GetVids() const;

                    /**
                     * 设置This parameter is invalid now.
                     * @param Vids This parameter is invalid now.
                     */
                    void SetVids(const std::vector<std::string>& _vids);

                    /**
                     * 判断参数 Vids 是否已赋值
                     * @return Vids 是否已赋值
                     */
                    bool VidsHasBeenSet() const;

                    /**
                     * 获取This parameter is invalid now.
                     * @return Vid This parameter is invalid now.
                     */
                    std::string GetVid() const;

                    /**
                     * 设置This parameter is invalid now.
                     * @param Vid This parameter is invalid now.
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     */
                    bool VidHasBeenSet() const;

                private:

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * File ID set. Any element in the set can be matched.
<li>Array length limit: 10.</li>
<li>ID length limit: 40 characters.</li>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * The file names to use for fuzzy search, which are sorted by relevance in descending order.
<li>Name length limit: 100 characters.</li>
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * The file name prefixes to search.
<li>Prefix length limit: 100 characters.</li>
<li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_namePrefixes;
                    bool m_namePrefixesHasBeenSet;

                    /**
                     * File description set. Media file descriptions are fuzzily matched. The higher the match rate, the higher-ranked the result.
<li>Length limit for a single description: 100 characters</li>
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> m_descriptions;
                    bool m_descriptionsHasBeenSet;

                    /**
                     * Category ID set. The categories of the specified IDs and all subcategories in the set are matched.
<li>Array length limit: 10.</li>
                     */
                    std::vector<int64_t> m_classIds;
                    bool m_classIdsHasBeenSet;

                    /**
                     * The tags to search. A file is considered a match if it has any of the tags specified.
<li>Tag length limit: 32 characters.</li>
<li>Array length limit: 16.</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * File type. Any element in the set can be matched.
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * Media file source set. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
<li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * The live stream code array. A media file will be returned if it matches any element in the array.
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> m_streamIds;
                    bool m_streamIdsHasBeenSet;

                    /**
                     * Matches files created within the time period.
<li>Includes specified start and end points in time.</li>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Files whose expiration time points are within the specified time range will be returned. Expired files will not be returned.
<li>The files whose expiration time points are on the start or end time of the specified range will also be returned.</li>
                     */
                    TimeRange m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Sorting order.
<li>Valid value of `Sort.Field`: CreateTime.</li>
<li>If `Text`, `Names`, or `Descriptions` is not empty, the `Sort.Field` field will not take effect, and the search results will be sorted by match rate.</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <div id="p_offset">Start offset of a paged return. Default value: 0. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <div id="p_limit">Number of entries returned by a paged query. Default value: 10. Entries from No. "Offset" to No. "Offset + Limit - 1" will be returned.
<li>Value range: "Offset + Limit" cannot be more than 5,000. (For more information, please see <a href="#maxResultsDesc">Limit on the Number of Results Returned by API</a>)</li></div>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies information entry that needs to be returned for all media files. Multiple entries can be specified simultaneously. N starts from 0. If this field is left empty, all information entries will be returned by default. Valid values:
<li>basicInfo (basic video information).</li>
<li>metaData (video metadata).</li>
<li>transcodeInfo (result information of video transcoding).</li>
<li>animatedGraphicsInfo (result information of animated image generating task).</li>
<li>imageSpriteInfo (image sprite information).</li>
<li>snapshotByTimeOffsetInfo (point-in-time screenshot information).</li>
<li>sampleSnapshotInfo (sampled screenshot information).</li>
<li>keyFrameDescInfo (timestamp information).</li>
<li>adaptiveDynamicStreamingInfo (information of adaptive bitrate streaming).</li>
<li>miniProgramReviewInfo (WeChat Mini Program audit information).</li>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Regions](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8).
<li>Length limit for a single region: 20 characters</li>
<li>Array length limit: 20</li>
                     */
                    std::vector<std::string> m_storageRegions;
                    bool m_storageRegionsHasBeenSet;

                    /**
                     * An array of storage classes. Valid values:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     */
                    std::vector<std::string> m_storageClasses;
                    bool m_storageClassesHasBeenSet;

                    /**
                     * The file formats.
<li>Array length limit: 10</li>
                     */
                    std::vector<std::string> m_mediaTypes;
                    bool m_mediaTypesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_reviewResults;
                    bool m_reviewResultsHasBeenSet;

                    /**
                     * The TRTC application IDs. Any file that matches one of the application IDs will be returned.
<li>Array length limit: 10</li>
                     */
                    std::vector<uint64_t> m_trtcSdkAppIds;
                    bool m_trtcSdkAppIdsHasBeenSet;

                    /**
                     * The TRTC room IDs. Any file that matches one of the room IDs will be returned.
<li>Element length limit: 64 characters.</li>
<li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_trtcRoomIds;
                    bool m_trtcRoomIdsHasBeenSet;

                    /**
                     * (This is not recommended. `Names`, `NamePrefixes`, or `Descriptions` should be used instead)
Search text, which fuzzily matches the media file name or description. The more matching items and the higher the match rate, the higher-ranked the result. It can contain up to 64 characters.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * (This is not recommended. `SourceTypes` should be used instead)
Media file source. For valid values, please see [SourceType](https://intl.cloud.tencent.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData).
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * (Not recommended. Consider using `StreamIds` instead.)
The live stream code.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * (This is not recommended. `CreateTime` should be used instead)
Start time in the creation time range.
<li>After or at the start time.</li>
<li>If `CreateTime.After` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * (This is not recommended. `CreateTime` should be used instead)
End time in the creation time range.
<li>Before the end time.</li>
<li>If `CreateTime.Before` also exists, it will be used first.</li>
<li>In ISO 8601 format. For more information, please see [ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * This parameter is invalid now.
                     */
                    std::vector<std::string> m_vids;
                    bool m_vidsHasBeenSet;

                    /**
                     * This parameter is invalid now.
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
