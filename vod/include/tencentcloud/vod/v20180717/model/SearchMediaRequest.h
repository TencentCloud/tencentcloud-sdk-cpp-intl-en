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
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/33987">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/33987">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/33987">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/33987">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>File id collection, match any element in the collection.</p><li>Array length limit: 10.</li><li>Single ID length limit: 40 character.</li>
                     * @return FileIds <p>File id collection, match any element in the collection.</p><li>Array length limit: 10.</li><li>Single ID length limit: 40 character.</li>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置<p>File id collection, match any element in the collection.</p><li>Array length limit: 10.</li><li>Single ID length limit: 40 character.</li>
                     * @param _fileIds <p>File id collection, match any element in the collection.</p><li>Array length limit: 10.</li><li>Single ID length limit: 40 character.</li>
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<p>File name collection. Fuzzy match media files by file name. The higher the matching degree, the higher the priority in sorting.</p><li>Single file name length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * @return Names <p>File name collection. Fuzzy match media files by file name. The higher the matching degree, the higher the priority in sorting.</p><li>Single file name length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置<p>File name collection. Fuzzy match media files by file name. The higher the matching degree, the higher the priority in sorting.</p><li>Single file name length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * @param _names <p>File name collection. Fuzzy match media files by file name. The higher the matching degree, the higher the priority in sorting.</p><li>Single file name length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<p>File name prefix. Prefix match media files.</p><li>Single file name prefix length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * @return NamePrefixes <p>File name prefix. Prefix match media files.</p><li>Single file name prefix length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetNamePrefixes() const;

                    /**
                     * 设置<p>File name prefix. Prefix match media files.</p><li>Single file name prefix length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * @param _namePrefixes <p>File name prefix. Prefix match media files.</p><li>Single file name prefix length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetNamePrefixes(const std::vector<std::string>& _namePrefixes);

                    /**
                     * 判断参数 NamePrefixes 是否已赋值
                     * @return NamePrefixes 是否已赋值
                     * 
                     */
                    bool NamePrefixesHasBeenSet() const;

                    /**
                     * 获取<p>File description set, fuzzy match media files. The higher the matching degree, higher priority in sorting.</p><li>Single description length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * @return Descriptions <p>File description set, fuzzy match media files. The higher the matching degree, higher priority in sorting.</p><li>Single description length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetDescriptions() const;

                    /**
                     * 设置<p>File description set, fuzzy match media files. The higher the matching degree, higher priority in sorting.</p><li>Single description length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * @param _descriptions <p>File description set, fuzzy match media files. The higher the matching degree, higher priority in sorting.</p><li>Single description length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetDescriptions(const std::vector<std::string>& _descriptions);

                    /**
                     * 判断参数 Descriptions 是否已赋值
                     * @return Descriptions 是否已赋值
                     * 
                     */
                    bool DescriptionsHasBeenSet() const;

                    /**
                     * 获取<p>Category id collection, match the specified ID in the collection and all its subclasses.</p><li>Array length limit: 10.</li>
                     * @return ClassIds <p>Category id collection, match the specified ID in the collection and all its subclasses.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<int64_t> GetClassIds() const;

                    /**
                     * 设置<p>Category id collection, match the specified ID in the collection and all its subclasses.</p><li>Array length limit: 10.</li>
                     * @param _classIds <p>Category id collection, match the specified ID in the collection and all its subclasses.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetClassIds(const std::vector<int64_t>& _classIds);

                    /**
                     * 判断参数 ClassIds 是否已赋值
                     * @return ClassIds 是否已赋值
                     * 
                     */
                    bool ClassIdsHasBeenSet() const;

                    /**
                     * 获取<p>Tag set, match any element in the collection.</p><li>Single tag length limit: 32 character.</li><li>Array length limit: 16.</li>
                     * @return Tags <p>Tag set, match any element in the collection.</p><li>Single tag length limit: 32 character.</li><li>Array length limit: 16.</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Tag set, match any element in the collection.</p><li>Single tag length limit: 32 character.</li><li>Array length limit: 16.</li>
                     * @param _tags <p>Tag set, match any element in the collection.</p><li>Single tag length limit: 32 character.</li><li>Array length limit: 16.</li>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>File type. Match any element in the collection:</p><li>Video: video file</li><li>Audio: audio file</li><li>Image: image file</li>
                     * @return Categories <p>File type. Match any element in the collection:</p><li>Video: video file</li><li>Audio: audio file</li><li>Image: image file</li>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置<p>File type. Match any element in the collection:</p><li>Video: video file</li><li>Audio: audio file</li><li>Image: image file</li>
                     * @param _categories <p>File type. Match any element in the collection:</p><li>Video: video file</li><li>Audio: audio file</li><li>Image: image file</li>
                     * 
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                    /**
                     * 获取<p>Media file source collection. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p><li>Array length limit: 10.</li>
                     * @return SourceTypes <p>Media file source collection. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置<p>Media file source collection. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p><li>Array length limit: 10.</li>
                     * @param _sourceTypes <p>Media file source collection. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     * 
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>Push stream live code collection. Match any element in the collection.</p><li>Array length limit: 10.</li>
                     * @return StreamIds <p>Push stream live code collection. Match any element in the collection.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetStreamIds() const;

                    /**
                     * 设置<p>Push stream live code collection. Match any element in the collection.</p><li>Array length limit: 10.</li>
                     * @param _streamIds <p>Push stream live code collection. Match any element in the collection.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetStreamIds(const std::vector<std::string>& _streamIds);

                    /**
                     * 判断参数 StreamIds 是否已赋值
                     * @return StreamIds 是否已赋值
                     * 
                     */
                    bool StreamIdsHasBeenSet() const;

                    /**
                     * 获取<p>Match files with creation time within this time period.</p><li>Include the specified start and end points in time.</li>
                     * @return CreateTime <p>Match files with creation time within this time period.</p><li>Include the specified start and end points in time.</li>
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置<p>Match files with creation time within this time period.</p><li>Include the specified start and end points in time.</li>
                     * @param _createTime <p>Match files with creation time within this time period.</p><li>Include the specified start and end points in time.</li>
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Match files with expiration time within this period. Unable to retrieve expired files.</p><li>Include the specified start and end points in time.</li>
                     * @return ExpireTime <p>Match files with expiration time within this period. Unable to retrieve expired files.</p><li>Include the specified start and end points in time.</li>
                     * 
                     */
                    TimeRange GetExpireTime() const;

                    /**
                     * 设置<p>Match files with expiration time within this period. Unable to retrieve expired files.</p><li>Include the specified start and end points in time.</li>
                     * @param _expireTime <p>Match files with expiration time within this period. Unable to retrieve expired files.</p><li>Include the specified start and end points in time.</li>
                     * 
                     */
                    void SetExpireTime(const TimeRange& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Media file storage region, such as ap-chongqing. Please refer to <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a>.</p><li>Single storage region length limit: 20 characters.</li><li>Array length limit: 20.</li>
                     * @return StorageRegions <p>Media file storage region, such as ap-chongqing. Please refer to <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a>.</p><li>Single storage region length limit: 20 characters.</li><li>Array length limit: 20.</li>
                     * 
                     */
                    std::vector<std::string> GetStorageRegions() const;

                    /**
                     * 设置<p>Media file storage region, such as ap-chongqing. Please refer to <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a>.</p><li>Single storage region length limit: 20 characters.</li><li>Array length limit: 20.</li>
                     * @param _storageRegions <p>Media file storage region, such as ap-chongqing. Please refer to <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a>.</p><li>Single storage region length limit: 20 characters.</li><li>Array length limit: 20.</li>
                     * 
                     */
                    void SetStorageRegions(const std::vector<std::string>& _storageRegions);

                    /**
                     * 判断参数 StorageRegions 是否已赋值
                     * @return StorageRegions 是否已赋值
                     * 
                     */
                    bool StorageRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Storage type array. Optional values:</p><li> STANDARD: Standard storage.</li><li> STANDARD_IA: Infrequent storage.</li><li> ARCHIVE: Archive storage.</li><li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * @return StorageClasses <p>Storage type array. Optional values:</p><li> STANDARD: Standard storage.</li><li> STANDARD_IA: Infrequent storage.</li><li> ARCHIVE: Archive storage.</li><li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * 
                     */
                    std::vector<std::string> GetStorageClasses() const;

                    /**
                     * 设置<p>Storage type array. Optional values:</p><li> STANDARD: Standard storage.</li><li> STANDARD_IA: Infrequent storage.</li><li> ARCHIVE: Archive storage.</li><li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * @param _storageClasses <p>Storage type array. Optional values:</p><li> STANDARD: Standard storage.</li><li> STANDARD_IA: Infrequent storage.</li><li> ARCHIVE: Archive storage.</li><li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * 
                     */
                    void SetStorageClasses(const std::vector<std::string>& _storageClasses);

                    /**
                     * 判断参数 StorageClasses 是否已赋值
                     * @return StorageClasses 是否已赋值
                     * 
                     */
                    bool StorageClassesHasBeenSet() const;

                    /**
                     * 获取<p>Media file packaging format collection, match any element in the collection.</p><li>Array length limit: 10.</li>
                     * @return MediaTypes <p>Media file packaging format collection, match any element in the collection.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetMediaTypes() const;

                    /**
                     * 设置<p>Media file packaging format collection, match any element in the collection.</p><li>Array length limit: 10.</li>
                     * @param _mediaTypes <p>Media file packaging format collection, match any element in the collection.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetMediaTypes(const std::vector<std::string>& _mediaTypes);

                    /**
                     * 判断参数 MediaTypes 是否已赋值
                     * @return MediaTypes 是否已赋值
                     * 
                     */
                    bool MediaTypesHasBeenSet() const;

                    /**
                     * 获取<p>Media file status, match any element in the collection.</p><li> Normal: normal;</li><li> SystemForbidden: Platform Ban;</li><li> Forbidden: proactive ban.</li>
                     * @return Status <p>Media file status, match any element in the collection.</p><li> Normal: normal;</li><li> SystemForbidden: Platform Ban;</li><li> Forbidden: proactive ban.</li>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置<p>Media file status, match any element in the collection.</p><li> Normal: normal;</li><li> SystemForbidden: Platform Ban;</li><li> Forbidden: proactive ban.</li>
                     * @param _status <p>Media file status, match any element in the collection.</p><li> Normal: normal;</li><li> SystemForbidden: Platform Ban;</li><li> Forbidden: proactive ban.</li>
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Media file review result, match any element in the collection.</p><li> pass: Pass review;</li><li> review: Suspected violation, suggest re-examination;</li><li> block: Confirmed violation, suggest banning;</li><li> notModerated: Not moderated.</li>
                     * @return ReviewResults <p>Media file review result, match any element in the collection.</p><li> pass: Pass review;</li><li> review: Suspected violation, suggest re-examination;</li><li> block: Confirmed violation, suggest banning;</li><li> notModerated: Not moderated.</li>
                     * 
                     */
                    std::vector<std::string> GetReviewResults() const;

                    /**
                     * 设置<p>Media file review result, match any element in the collection.</p><li> pass: Pass review;</li><li> review: Suspected violation, suggest re-examination;</li><li> block: Confirmed violation, suggest banning;</li><li> notModerated: Not moderated.</li>
                     * @param _reviewResults <p>Media file review result, match any element in the collection.</p><li> pass: Pass review;</li><li> review: Suspected violation, suggest re-examination;</li><li> block: Confirmed violation, suggest banning;</li><li> notModerated: Not moderated.</li>
                     * 
                     */
                    void SetReviewResults(const std::vector<std::string>& _reviewResults);

                    /**
                     * 判断参数 ReviewResults 是否已赋值
                     * @return ReviewResults 是否已赋值
                     * 
                     */
                    bool ReviewResultsHasBeenSet() const;

                    /**
                     * 获取<p>TRTC application ID collection. Matches any element in the collection.</p><li>Array length limit: 10.</li>
                     * @return TrtcSdkAppIds <p>TRTC application ID collection. Matches any element in the collection.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<uint64_t> GetTrtcSdkAppIds() const;

                    /**
                     * 设置<p>TRTC application ID collection. Matches any element in the collection.</p><li>Array length limit: 10.</li>
                     * @param _trtcSdkAppIds <p>TRTC application ID collection. Matches any element in the collection.</p><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetTrtcSdkAppIds(const std::vector<uint64_t>& _trtcSdkAppIds);

                    /**
                     * 判断参数 TrtcSdkAppIds 是否已赋值
                     * @return TrtcSdkAppIds 是否已赋值
                     * 
                     */
                    bool TrtcSdkAppIdsHasBeenSet() const;

                    /**
                     * 获取<p>TRTC room ID collection. Matches any element in the collection.</p><li>Single room ID length limit: 64 characters;</li><li>Array length limit: 10.</li>
                     * @return TrtcRoomIds <p>TRTC room ID collection. Matches any element in the collection.</p><li>Single room ID length limit: 64 characters;</li><li>Array length limit: 10.</li>
                     * 
                     */
                    std::vector<std::string> GetTrtcRoomIds() const;

                    /**
                     * 设置<p>TRTC room ID collection. Matches any element in the collection.</p><li>Single room ID length limit: 64 characters;</li><li>Array length limit: 10.</li>
                     * @param _trtcRoomIds <p>TRTC room ID collection. Matches any element in the collection.</p><li>Single room ID length limit: 64 characters;</li><li>Array length limit: 10.</li>
                     * 
                     */
                    void SetTrtcRoomIds(const std::vector<std::string>& _trtcRoomIds);

                    /**
                     * 判断参数 TrtcRoomIds 是否已赋值
                     * @return TrtcRoomIds 是否已赋值
                     * 
                     */
                    bool TrtcRoomIdsHasBeenSet() const;

                    /**
                     * 获取<p>Information to be returned for all specified media files, multiple information can be specified simultaneously, N starts incrementing from 0. If this field is not filled in, default return all information. Options include:</p><li>basicInfo (video basic information).</li><li>metaData (video metadata).</li><li>transcodeInfo (video transcoding result information).</li><li>animatedGraphicsInfo (video motion graphic result information).</li><li>imageSpriteInfo (video thumbnail information).</li><li>snapshotByTimeOffsetInfo (video screenshot by specified time point).</li><li>sampleSnapshotInfo (sampling screenshot information).</li><li>keyFrameDescInfo (Dotting Information).</li><li>adaptiveDynamicStreamingInfo (Adaptive Bitrate Streaming information).</li><li>miniProgramReviewInfo (miniProgramReviewInfo).</li>
                     * @return Filters <p>Information to be returned for all specified media files, multiple information can be specified simultaneously, N starts incrementing from 0. If this field is not filled in, default return all information. Options include:</p><li>basicInfo (video basic information).</li><li>metaData (video metadata).</li><li>transcodeInfo (video transcoding result information).</li><li>animatedGraphicsInfo (video motion graphic result information).</li><li>imageSpriteInfo (video thumbnail information).</li><li>snapshotByTimeOffsetInfo (video screenshot by specified time point).</li><li>sampleSnapshotInfo (sampling screenshot information).</li><li>keyFrameDescInfo (Dotting Information).</li><li>adaptiveDynamicStreamingInfo (Adaptive Bitrate Streaming information).</li><li>miniProgramReviewInfo (miniProgramReviewInfo).</li>
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置<p>Information to be returned for all specified media files, multiple information can be specified simultaneously, N starts incrementing from 0. If this field is not filled in, default return all information. Options include:</p><li>basicInfo (video basic information).</li><li>metaData (video metadata).</li><li>transcodeInfo (video transcoding result information).</li><li>animatedGraphicsInfo (video motion graphic result information).</li><li>imageSpriteInfo (video thumbnail information).</li><li>snapshotByTimeOffsetInfo (video screenshot by specified time point).</li><li>sampleSnapshotInfo (sampling screenshot information).</li><li>keyFrameDescInfo (Dotting Information).</li><li>adaptiveDynamicStreamingInfo (Adaptive Bitrate Streaming information).</li><li>miniProgramReviewInfo (miniProgramReviewInfo).</li>
                     * @param _filters <p>Information to be returned for all specified media files, multiple information can be specified simultaneously, N starts incrementing from 0. If this field is not filled in, default return all information. Options include:</p><li>basicInfo (video basic information).</li><li>metaData (video metadata).</li><li>transcodeInfo (video transcoding result information).</li><li>animatedGraphicsInfo (video motion graphic result information).</li><li>imageSpriteInfo (video thumbnail information).</li><li>snapshotByTimeOffsetInfo (video screenshot by specified time point).</li><li>sampleSnapshotInfo (sampling screenshot information).</li><li>keyFrameDescInfo (Dotting Information).</li><li>adaptiveDynamicStreamingInfo (Adaptive Bitrate Streaming information).</li><li>miniProgramReviewInfo (miniProgramReviewInfo).</li>
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method.</p><li>Sort.Field optional CreateTime.</li><li>When Text, Names, or Descriptions is not empty, the Sort.Field field is invalid. Search results sorted by relevance.</li>
                     * @return Sort <p>Sorting method.</p><li>Sort.Field optional CreateTime.</li><li>When Text, Names, or Descriptions is not empty, the Sort.Field field is invalid. Search results sorted by relevance.</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置<p>Sorting method.</p><li>Sort.Field optional CreateTime.</li><li>When Text, Names, or Descriptions is not empty, the Sort.Field field is invalid. Search results sorted by relevance.</li>
                     * @param _sort <p>Sorting method.</p><li>Sort.Field optional CreateTime.</li><li>When Text, Names, or Descriptions is not empty, the Sort.Field field is invalid. Search results sorted by relevance.</li>
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<div id="p_offset">Starting offset amount for pagination return, default value: 0. Returns entries from Offset to Offset+Limit-1.<li>Value ranges from...to... Offset + Limit is no more than 5000. (See: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * @return Offset <div id="p_offset">Starting offset amount for pagination return, default value: 0. Returns entries from Offset to Offset+Limit-1.<li>Value ranges from...to... Offset + Limit is no more than 5000. (See: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<div id="p_offset">Starting offset amount for pagination return, default value: 0. Returns entries from Offset to Offset+Limit-1.<li>Value ranges from...to... Offset + Limit is no more than 5000. (See: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * @param _offset <div id="p_offset">Starting offset amount for pagination return, default value: 0. Returns entries from Offset to Offset+Limit-1.<li>Value ranges from...to... Offset + Limit is no more than 5000. (See: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<div id="p_limit">Number of records returned in pages. Default value: 10. Records from Offset to Offset+Limit-1 will be returned.<li>Value ranges from...to... Offset + Limit is no more than 5000. (Refer to: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * @return Limit <div id="p_limit">Number of records returned in pages. Default value: 10. Records from Offset to Offset+Limit-1 will be returned.<li>Value ranges from...to... Offset + Limit is no more than 5000. (Refer to: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<div id="p_limit">Number of records returned in pages. Default value: 10. Records from Offset to Offset+Limit-1 will be returned.<li>Value ranges from...to... Offset + Limit is no more than 5000. (Refer to: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * @param _limit <div id="p_limit">Number of records returned in pages. Default value: 10. Records from Offset to Offset+Limit-1 will be returned.<li>Value ranges from...to... Offset + Limit is no more than 5000. (Refer to: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended: Use Names, NamePrefixes, or Descriptions as alternatives)<br>Search text, fuzzy match media file name or description information. The higher the matching degree and more matches, the higher priority in sorting. Length limit: 64 characters.</p>
                     * @return Text <p>(Not recommended: Use Names, NamePrefixes, or Descriptions as alternatives)<br>Search text, fuzzy match media file name or description information. The higher the matching degree and more matches, the higher priority in sorting. Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>(Not recommended: Use Names, NamePrefixes, or Descriptions as alternatives)<br>Search text, fuzzy match media file name or description information. The higher the matching degree and more matches, the higher priority in sorting. Length limit: 64 characters.</p>
                     * @param _text <p>(Not recommended: Use Names, NamePrefixes, or Descriptions as alternatives)<br>Search text, fuzzy match media file name or description information. The higher the matching degree and more matches, the higher priority in sorting. Length limit: 64 characters.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended: Use SourceTypes as an alternative)<br>Media file source. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p>
                     * @return SourceType <p>(Not recommended: Use SourceTypes as an alternative)<br>Media file source. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>(Not recommended: Use SourceTypes as an alternative)<br>Media file source. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p>
                     * @param _sourceType <p>(Not recommended: Use SourceTypes as an alternative)<br>Media file source. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended: Use StreamIds as an alternative)<br>Push stream live code.</p>
                     * @return StreamId <p>(Not recommended: Use StreamIds as an alternative)<br>Push stream live code.</p>
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置<p>(Not recommended: Use StreamIds as an alternative)<br>Push stream live code.</p>
                     * @param _streamId <p>(Not recommended: Use StreamIds as an alternative)<br>Push stream live code.</p>
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended: Use CreateTime instead)<br>Start time of creation time.</p><li>Greater than or equal to start time.</li><li>When CreateTime.After also exists, CreateTime.After will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @return StartTime <p>(Not recommended: Use CreateTime instead)<br>Start time of creation time.</p><li>Greater than or equal to start time.</li><li>When CreateTime.After also exists, CreateTime.After will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>(Not recommended: Use CreateTime instead)<br>Start time of creation time.</p><li>Greater than or equal to start time.</li><li>When CreateTime.After also exists, CreateTime.After will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @param _startTime <p>(Not recommended: Use CreateTime instead)<br>Start time of creation time.</p><li>Greater than or equal to start time.</li><li>When CreateTime.After also exists, CreateTime.After will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>(Not recommended: Use CreateTime instead)<br>End time of creation time.</p><li>Less than end time.</li><li>When CreateTime.Before also exists, CreateTime.Before will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @return EndTime <p>(Not recommended: Use CreateTime instead)<br>End time of creation time.</p><li>Less than end time.</li><li>When CreateTime.Before also exists, CreateTime.Before will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>(Not recommended: Use CreateTime instead)<br>End time of creation time.</p><li>Less than end time.</li><li>When CreateTime.Before also exists, CreateTime.Before will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * @param _endTime <p>(Not recommended: Use CreateTime instead)<br>End time of creation time.</p><li>Less than end time.</li><li>When CreateTime.Before also exists, CreateTime.Before will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>This field is invalid.</p>
                     * @return Vids <p>This field is invalid.</p>
                     * 
                     */
                    std::vector<std::string> GetVids() const;

                    /**
                     * 设置<p>This field is invalid.</p>
                     * @param _vids <p>This field is invalid.</p>
                     * 
                     */
                    void SetVids(const std::vector<std::string>& _vids);

                    /**
                     * 判断参数 Vids 是否已赋值
                     * @return Vids 是否已赋值
                     * 
                     */
                    bool VidsHasBeenSet() const;

                    /**
                     * 获取<p>This field is invalid.</p>
                     * @return Vid <p>This field is invalid.</p>
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置<p>This field is invalid.</p>
                     * @param _vid <p>This field is invalid.</p>
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取<p>Live streaming push Domain. Valid when the media source is Live streaming Recording.</p>
                     * @return StreamDomains <p>Live streaming push Domain. Valid when the media source is Live streaming Recording.</p>
                     * 
                     */
                    std::vector<std::string> GetStreamDomains() const;

                    /**
                     * 设置<p>Live streaming push Domain. Valid when the media source is Live streaming Recording.</p>
                     * @param _streamDomains <p>Live streaming push Domain. Valid when the media source is Live streaming Recording.</p>
                     * 
                     */
                    void SetStreamDomains(const std::vector<std::string>& _streamDomains);

                    /**
                     * 判断参数 StreamDomains 是否已赋值
                     * @return StreamDomains 是否已赋值
                     * 
                     */
                    bool StreamDomainsHasBeenSet() const;

                    /**
                     * 获取<p>Live streaming push Path. Valid at that time when the source is live recording.</p>
                     * @return StreamPaths <p>Live streaming push Path. Valid at that time when the source is live recording.</p>
                     * 
                     */
                    std::vector<std::string> GetStreamPaths() const;

                    /**
                     * 设置<p>Live streaming push Path. Valid at that time when the source is live recording.</p>
                     * @param _streamPaths <p>Live streaming push Path. Valid at that time when the source is live recording.</p>
                     * 
                     */
                    void SetStreamPaths(const std::vector<std::string>& _streamPaths);

                    /**
                     * 判断参数 StreamPaths 是否已赋值
                     * @return StreamPaths 是否已赋值
                     * 
                     */
                    bool StreamPathsHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/33987">application</a> ID. For customers who activate on-demand services from December 25, 2023, they must fill this field with the app ID when accessing resources in on-demand applications (whether it's the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>File id collection, match any element in the collection.</p><li>Array length limit: 10.</li><li>Single ID length limit: 40 character.</li>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p>File name collection. Fuzzy match media files by file name. The higher the matching degree, the higher the priority in sorting.</p><li>Single file name length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <p>File name prefix. Prefix match media files.</p><li>Single file name prefix length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_namePrefixes;
                    bool m_namePrefixesHasBeenSet;

                    /**
                     * <p>File description set, fuzzy match media files. The higher the matching degree, higher priority in sorting.</p><li>Single description length limit: 100 characters.</li><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_descriptions;
                    bool m_descriptionsHasBeenSet;

                    /**
                     * <p>Category id collection, match the specified ID in the collection and all its subclasses.</p><li>Array length limit: 10.</li>
                     */
                    std::vector<int64_t> m_classIds;
                    bool m_classIdsHasBeenSet;

                    /**
                     * <p>Tag set, match any element in the collection.</p><li>Single tag length limit: 32 character.</li><li>Array length limit: 16.</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>File type. Match any element in the collection:</p><li>Video: video file</li><li>Audio: audio file</li><li>Image: image file</li>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * <p>Media file source collection. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * <p>Push stream live code collection. Match any element in the collection.</p><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_streamIds;
                    bool m_streamIdsHasBeenSet;

                    /**
                     * <p>Match files with creation time within this time period.</p><li>Include the specified start and end points in time.</li>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Match files with expiration time within this period. Unable to retrieve expired files.</p><li>Include the specified start and end points in time.</li>
                     */
                    TimeRange m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Media file storage region, such as ap-chongqing. Please refer to <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8">region list</a>.</p><li>Single storage region length limit: 20 characters.</li><li>Array length limit: 20.</li>
                     */
                    std::vector<std::string> m_storageRegions;
                    bool m_storageRegionsHasBeenSet;

                    /**
                     * <p>Storage type array. Optional values:</p><li> STANDARD: Standard storage.</li><li> STANDARD_IA: Infrequent storage.</li><li> ARCHIVE: Archive storage.</li><li> DEEP_ARCHIVE: Deep archive storage.</li>
                     */
                    std::vector<std::string> m_storageClasses;
                    bool m_storageClassesHasBeenSet;

                    /**
                     * <p>Media file packaging format collection, match any element in the collection.</p><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_mediaTypes;
                    bool m_mediaTypesHasBeenSet;

                    /**
                     * <p>Media file status, match any element in the collection.</p><li> Normal: normal;</li><li> SystemForbidden: Platform Ban;</li><li> Forbidden: proactive ban.</li>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Media file review result, match any element in the collection.</p><li> pass: Pass review;</li><li> review: Suspected violation, suggest re-examination;</li><li> block: Confirmed violation, suggest banning;</li><li> notModerated: Not moderated.</li>
                     */
                    std::vector<std::string> m_reviewResults;
                    bool m_reviewResultsHasBeenSet;

                    /**
                     * <p>TRTC application ID collection. Matches any element in the collection.</p><li>Array length limit: 10.</li>
                     */
                    std::vector<uint64_t> m_trtcSdkAppIds;
                    bool m_trtcSdkAppIdsHasBeenSet;

                    /**
                     * <p>TRTC room ID collection. Matches any element in the collection.</p><li>Single room ID length limit: 64 characters;</li><li>Array length limit: 10.</li>
                     */
                    std::vector<std::string> m_trtcRoomIds;
                    bool m_trtcRoomIdsHasBeenSet;

                    /**
                     * <p>Information to be returned for all specified media files, multiple information can be specified simultaneously, N starts incrementing from 0. If this field is not filled in, default return all information. Options include:</p><li>basicInfo (video basic information).</li><li>metaData (video metadata).</li><li>transcodeInfo (video transcoding result information).</li><li>animatedGraphicsInfo (video motion graphic result information).</li><li>imageSpriteInfo (video thumbnail information).</li><li>snapshotByTimeOffsetInfo (video screenshot by specified time point).</li><li>sampleSnapshotInfo (sampling screenshot information).</li><li>keyFrameDescInfo (Dotting Information).</li><li>adaptiveDynamicStreamingInfo (Adaptive Bitrate Streaming information).</li><li>miniProgramReviewInfo (miniProgramReviewInfo).</li>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sorting method.</p><li>Sort.Field optional CreateTime.</li><li>When Text, Names, or Descriptions is not empty, the Sort.Field field is invalid. Search results sorted by relevance.</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <div id="p_offset">Starting offset amount for pagination return, default value: 0. Returns entries from Offset to Offset+Limit-1.<li>Value ranges from...to... Offset + Limit is no more than 5000. (See: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <div id="p_limit">Number of records returned in pages. Default value: 10. Records from Offset to Offset+Limit-1 will be returned.<li>Value ranges from...to... Offset + Limit is no more than 5000. (Refer to: <a href="#maxResultsDesc">API return result count limit</a>)</li></div>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>(Not recommended: Use Names, NamePrefixes, or Descriptions as alternatives)<br>Search text, fuzzy match media file name or description information. The higher the matching degree and more matches, the higher priority in sorting. Length limit: 64 characters.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>(Not recommended: Use SourceTypes as an alternative)<br>Media file source. Source value reference <a href="https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaSourceData">SourceType</a>.</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>(Not recommended: Use StreamIds as an alternative)<br>Push stream live code.</p>
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * <p>(Not recommended: Use CreateTime instead)<br>Start time of creation time.</p><li>Greater than or equal to start time.</li><li>When CreateTime.After also exists, CreateTime.After will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>(Not recommended: Use CreateTime instead)<br>End time of creation time.</p><li>Less than end time.</li><li>When CreateTime.Before also exists, CreateTime.Before will be used first.</li><li>Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).</li>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>This field is invalid.</p>
                     */
                    std::vector<std::string> m_vids;
                    bool m_vidsHasBeenSet;

                    /**
                     * <p>This field is invalid.</p>
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * <p>Live streaming push Domain. Valid when the media source is Live streaming Recording.</p>
                     */
                    std::vector<std::string> m_streamDomains;
                    bool m_streamDomainsHasBeenSet;

                    /**
                     * <p>Live streaming push Path. Valid at that time when the source is live recording.</p>
                     */
                    std::vector<std::string> m_streamPaths;
                    bool m_streamPathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
